using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using LiveCharts;
using LiveCharts.Wpf;
using LiveCharts.Defaults;



namespace WindowsFormsControlLibrary2
{
    public partial class UserControl1: UserControl
    {

        List<string> namesOfCols = new List<string>();
        List<double> Time = new List<double>();
        List<double> FirstChanal = new List<double>();
        List<double> SecondChanal = new List<double>();
        List<double> TheardChanal = new List<double>();
        List<string> Annotations = new List<string>();

        double X_min;
        double X_max;
        double Y;

        LiveCharts.SeriesCollection seriesCollection = new LiveCharts.SeriesCollection();


        
        LiveCharts.ChartValues<ObservablePoint> List1Points = new LiveCharts.ChartValues<ObservablePoint>();
        LiveCharts.ChartValues<ObservablePoint> List1Points2 = new LiveCharts.ChartValues<ObservablePoint>();

        double x = 13053.00;
        double y = 10;


        public UserControl1()
        {
            InitializeComponent();

            string path = "12.dat";

            string[] separators = {"    ", "	", "\r" };

            using (var streamReader = File.OpenText(path))
            {
                var lines = streamReader.ReadToEnd().Split("\n".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);

                foreach(string line in lines)
                {

                    if(line.Contains("Time (s)") || line.Contains("1 channel (Count/s)"))
                    {
                        var names = line.Split(separators, StringSplitOptions.RemoveEmptyEntries); 

                        foreach(var name in names)
                        {

                            namesOfCols.Add(name);
                        }
                    }
                    else
                    {
                        var values = line.Split(separators, StringSplitOptions.RemoveEmptyEntries);

                        for(int i=0; i< values.Count(); i++)
                        {
                            if(namesOfCols[i] == "Time (s)")
                            {
                                Time.Add(Double.Parse(values[i], System.Globalization.CultureInfo.InvariantCulture));  
                            }
                            else if (namesOfCols[i] == "1 channel (Count/s)")
                            {
                                FirstChanal.Add(Double.Parse(values[i], System.Globalization.CultureInfo.InvariantCulture));
                            }
                            else if (namesOfCols[i] == "2 channel (Count/s)")
                            {
                                SecondChanal.Add(Double.Parse(values[i], System.Globalization.CultureInfo.InvariantCulture));
                            }
                            else if (namesOfCols[i] == "3 channel (Count/s)")
                            {
                                TheardChanal.Add(Double.Parse(values[i], System.Globalization.CultureInfo.InvariantCulture));
                            }
                            else if (namesOfCols[i] == "Annotation")
                            {
                                if(values[i] != "-")
                                {
                                    Annotations.Add(values[i]);
                                }
                                else
                                {
                                    Annotations.Add("0.0");
                                }
                                
                            }
                        }

                       
                    }

                    
                    //textBox1.Text = $"  {Time.ToString()}";




                }


            }

            cartesianChart1.DisableAnimations = true;

            

            X_min = Time.Min();
            X_max = Time.Max();
            Y = Convert.ToDouble(numericUpDown2.Value);


            chart1.Series.Add("OneChanal");
            chart1.Series["OneChanal"].BorderWidth = 3;
            chart1.Series["OneChanal"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            


            chart1.Series.Add("Line");
            chart1.Series["Line"].BorderWidth = 4;
            chart1.Series["Line"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            chart1.Series["Line"].Color = Color.Red;
            



            for (int i = 0; i < Time.Count(); i++)
            {
                List1Points.Add(new ObservablePoint { X = Time[i], Y = FirstChanal[i] });
                chart1.Series["OneChanal"].Points.AddXY(Time[i], FirstChanal[i]);
                chart1.ChartAreas[0].AxisY.Maximum = FirstChanal.Max() + 1;
                chart1.ChartAreas[0].AxisY.Minimum = FirstChanal.Min() - 1;
                chart1.Series["Line"].Points.Clear();
                chart1.Series["Line"].Points.AddXY(X_min, Y);
                chart1.Series["Line"].Points.AddXY(X_max, Y);

            }
            seriesCollection.Add(new LiveCharts.Wpf.LineSeries
            {
                Values = List1Points,
                LineSmoothness = 0,
                PointGeometry = DefaultGeometries.None,
                Fill = System.Windows.Media.Brushes.Transparent,
            });

            

            for (int i = 0; i < 2; i++)
            {

                List1Points2.Clear();
                List1Points2.Add(new ObservablePoint { X = X_min, Y = Y });
                List1Points2.Add(new ObservablePoint { X = X_max, Y = Y });
            }
            seriesCollection.Add(new LiveCharts.Wpf.LineSeries
            {
                Values = List1Points2,
                LineSmoothness = 0,
                PointGeometry = DefaultGeometries.None,
                StrokeThickness = 4,
                Fill = System.Windows.Media.Brushes.Transparent,
            });


            cartesianChart1.Series = seriesCollection;


            //foreach (var n in Annotations)
            //{
            //    textBox1.Text += $"  {n.ToString()}\r\n";
            //}



            //chart1.Series.Add("ChanalOne");
            //chart1.Series["ChanalOne"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;

            //for (int i = 0; i < Time.Count(); i++)
            //{
            //    chart1.Series["ChanalOne"].Points.AddXY(Time[i], FirstChanal[i]);
            //}






            //for (int k = 0; k <)

            //    for (int i = 0; i < namesOfCols.Count(); i++)
            //{
            //    LiveCharts.Wpf.LineSeries lineSer = new LiveCharts.Wpf.LineSeries();
            //    lineSer.Title = namesOfCols[i];

            //    LiveCharts.ChartValues<double> vals = new LiveCharts.ChartValues<double>();

            //    for(int k = 0; k<)

            //    lineSer.Values.Add(new LiveCharts.ChartValues<double> { 1, 2, 3 });

            //    //seriesCollection.Add(lineSer);

            //}

            //seriesCollection.Add(new LiveCharts.Wpf.LineSeries { Values = new List<double> { 1, 2, 3 } });


            //for (var i = 0; i < 10; i++)
            //{
            //    seriesCollection.Add(new LiveCharts.Wpf.LineSeries { Values = new LiveCharts.ChartValues<double> { 1, 2, 3 } });
            //}
            //cartesianChart1.Series = seriesCollection;



            //int counter = 0;
            //string line;

            //// Read the file and display it line by line.  
            //StreamReader file = new StreamReader(path);
            //while ((line = file.ReadLine()) != null)
            //{
            //    textBox1.Text += $"{line}\r\n";
            //    counter++;
            //}

            //file.Close();

        }


        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

            chart1.Series["OneChanal"].Points.Clear();



            if (comboBox1.SelectedItem == comboBox1.Items[0])
            {
                for (int i = 0; i < Time.Count(); i++)
                {
                    List1Points.Add(new ObservablePoint { X = Time[i], Y = FirstChanal[i] });
                    chart1.Series["OneChanal"].Points.AddXY(Time[i], FirstChanal[i]);
                    chart1.ChartAreas[0].AxisY.Maximum = FirstChanal.Max() + 1;
                    chart1.ChartAreas[0].AxisY.Minimum = FirstChanal.Min() - 1;

                }
            }
            else if (comboBox1.SelectedItem == comboBox1.Items[1])
            {
                for (int i = 0; i < Time.Count(); i++)
                {
                    List1Points.Add(new ObservablePoint { X = Time[i], Y = SecondChanal[i] });
                    chart1.Series["OneChanal"].Points.AddXY(Time[i], SecondChanal[i]);
                    chart1.ChartAreas[0].AxisY.Maximum = SecondChanal.Max() + 1;
                    chart1.ChartAreas[0].AxisY.Minimum = SecondChanal.Min() - 1;
                }
            }
            else if (comboBox1.SelectedItem == comboBox1.Items[2])
            {
                for (int i = 0; i < Time.Count(); i++)
                {
                    List1Points.Add(new ObservablePoint { X = Time[i], Y = TheardChanal[i] });
                    chart1.Series["OneChanal"].Points.AddXY(Time[i], TheardChanal[i]);
                    chart1.ChartAreas[0].AxisY.Maximum = TheardChanal.Max() + 1;
                    chart1.ChartAreas[0].AxisY.Minimum = TheardChanal.Min() - 1;
                }
            }

            seriesCollection.Add(new LiveCharts.Wpf.LineSeries
            {
                Values = List1Points,
                LineSmoothness = 0,
                PointGeometry = DefaultGeometries.None,
                Fill = System.Windows.Media.Brushes.Transparent,
            });

            cartesianChart1.Series = seriesCollection;

            

            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            List1Points.Add(new ObservablePoint { X = x, Y = y });

        }

      

        

        private void numericUpDown2_ValueChanged(object sender, EventArgs e)
        {
            X_min = Time.Min();
            X_max = Time.Max();
            Y = Convert.ToDouble(numericUpDown2.Value);

            chart1.Series["Line"].Points.Clear();
            chart1.Series["Line"].Points.AddXY(X_min, Y);
            chart1.Series["Line"].Points.AddXY(X_max, Y);


            for (int i = 0; i < 2; i++)
            {


                List1Points2.Clear();
                List1Points2.Add(new ObservablePoint { X = X_min, Y = Y });
                List1Points2.Add(new ObservablePoint { X = X_max, Y = Y });
            }
            
            seriesCollection[1] = new LiveCharts.Wpf.LineSeries
            {
                Values = List1Points2,
                LineSmoothness = 0,
                PointGeometry = DefaultGeometries.None,
                StrokeThickness = 4,
                Foreground = System.Windows.Media.Brushes.Transparent, 
                Stroke = System.Windows.Media.Brushes.Red,
                Opacity = 0.5,
                Fill = System.Windows.Media.Brushes.Transparent,
            };

        }

        private void click_Btn(object sender, ChartPoint e)
        {
            var pixel = cartesianChart1.Base.ConvertToPixels(e.AsPoint());
            label5.Text = pixel.Y.ToString();
        }

        private void chart1_MouseClick(object sender, MouseEventArgs e)
        {
            double XVuale = chart1.ChartAreas[0].AxisX.PixelPositionToValue(e.X);
            double YVuale = chart1.ChartAreas[0].AxisY.PixelPositionToValue(e.Y);

            label2.Text = Convert.ToDecimal(XVuale).ToString();
            label4.Text = Convert.ToDecimal(YVuale).ToString();
            numericUpDown2.Value = Convert.ToDecimal(YVuale);

            chart1.Series["Line"].Points.Clear();
            
            chart1.Series["Line"].Points.AddXY(X_min, YVuale);
            chart1.Series["Line"].Points.AddXY(X_max, YVuale);
            

        }

        private void cartesianChart1_DataClick(object sender, ChartPoint e)
        {
            var pixel = cartesianChart1.Base.ConvertToPixels(e.AsPoint());

            label5.Text = pixel.Y.ToString();
        }
    }
}
