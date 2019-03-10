using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab6_Holiday
{
    public partial class Form1 : Form
    {
        HolidayService2 myHols = new HolidayService2();
        Country countryC = Country.IrelandRepublicOf; // Country is an enum and must be accessed kinda like an array
        int yearSel;

        public Form1()
        {
            InitializeComponent();
            //HolidayService2 myHols = new HolidayService2();
        }

        private void Request_Click(object sender, EventArgs e)
        {
            Holiday[] Holibop = myHols.GetHolidaysForYear(countryC, 2019); // pass the countryCode (IrelandRepublicOf) and the year (int yearSel)
            yearSel = Convert.ToInt32(ChooseYear.SelectedIndex);
            // this returns an array of Holiday objects
            //for (int i = 0; i < Holibop.Length; i++)
            //{
            Console.WriteLine(yearSel); // how to print class Holibop array 
            //}
            //textBox1.Text = "test";
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {}

        private void ChooseYear_SelectedIndexChanged(object sender, EventArgs e)
        {
            //yearSel = Convert.ToInt32(ChooseYear.SelectedIndex);
        }
    }
}
