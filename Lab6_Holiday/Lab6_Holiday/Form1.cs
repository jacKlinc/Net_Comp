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
         // Country is an enum and must be accessed kinda like an array

        string hCode;
        HolidayType hType; // enum: x
        HolidayDateType dType;
        BankHoliday bankHType;
        System.DateTime hDate;
        RegionCode appRegions; // inherits CodeDescriptionBase
        string relatedActHCode, cField, desField;

        public Form1()
        {
            InitializeComponent();
            //HolidayService2 myHols = new HolidayService2();
        }

        private void Request_Click(object sender, EventArgs e)
        {
            Holiday[] Holibop = myHols.GetHolidaysForYear(Country.IrelandRepublicOf, 2021); // pass the countryCode (IrelandRepublicOf) and the year (int yearSel)
            int yearSel = Convert.ToInt32(ChooseYear.SelectedIndex);
            // this returns an array of Holiday objects
            for (int i = 0; i < Holibop.Length; i++)
            {
                hCode = Holibop[i].HolidayCode;
                hType = Holibop[i].HolidayType;
                dType = Holibop[i].DateType;
                bankHType = Holibop[i].BankHoliday;
                hDate = Holibop[i].Date;
                relatedActHCode = Holibop[i].RelatedHolidayCode;
                /*for (int j = 0; j < Holibop[i].ApplicableRegions.Length; j++)
                {
                    hCode = relatedActHCode[j].GetHashCode;
                }*/
                textBox1.Text = "Your holiers:" + " " + hCode + " " + hType + " " + dType + " " + bankHType + " " + hDate + " " + relatedActHCode;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {}

        private void ChooseYear_SelectedIndexChanged(object sender, EventArgs e)
        {}
    }
}
