#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT2_3()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 11:23:16 2025) by ROOT version 6.32.06
   TCanvas *cMassFig_PP = new TCanvas("cMassFig_PP", "cMassFig",200,1103,1000,800);
   cMassFig_PP->Range(0,0,1,1);
   cMassFig_PP->SetFillColor(0);
   cMassFig_PP->SetBorderMode(0);
   cMassFig_PP->SetBorderSize(2);
   cMassFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_PP
   TPad *pad1_PP__0 = new TPad("pad1_PP", "",0,0.24,1,1);
   pad1_PP__0->Draw();
   pad1_PP__0->cd();
   pad1_PP__0->Range(2.375,5,3.625,15555);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetBottomMargin(0);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_dc8b910__1 = new TH1D("frame_mass_dc8b910__1"," ",40,2.5,3.5);
   frame_mass_dc8b910__1->SetBinContent(1,10756.52);
   frame_mass_dc8b910__1->SetMinimum(5);
   frame_mass_dc8b910__1->SetMaximum(14000);
   frame_mass_dc8b910__1->SetEntries(2);
   frame_mass_dc8b910__1->SetDirectory(nullptr);
   frame_mass_dc8b910__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_dc8b910__1->SetLineColor(ci);
   frame_mass_dc8b910__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_dc8b910__1->GetXaxis()->SetLabelFont(42);
   frame_mass_dc8b910__1->GetXaxis()->SetLabelSize(0.04);
   frame_mass_dc8b910__1->GetXaxis()->SetTitleSize(0.045);
   frame_mass_dc8b910__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_dc8b910__1->GetXaxis()->SetTitleFont(42);
   frame_mass_dc8b910__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_dc8b910__1->GetYaxis()->SetLabelFont(42);
   frame_mass_dc8b910__1->GetYaxis()->SetLabelSize(0.04);
   frame_mass_dc8b910__1->GetYaxis()->SetTitleSize(0.045);
   frame_mass_dc8b910__1->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_dc8b910__1->GetYaxis()->SetTitleFont(42);
   frame_mass_dc8b910__1->GetZaxis()->SetLabelFont(42);
   frame_mass_dc8b910__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_dc8b910__1->GetZaxis()->SetTitleFont(42);
   frame_mass_dc8b910__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 1886, 1865, 1804, 1857, 1731, 1715, 1739, 1765, 1744, 1716, 1767, 1748, 1788, 1835, 2029, 2090, 2345,
   2691, 2982, 3703, 4852, 6515, 8394, 9996, 9751, 7555, 4823, 2919, 1866, 1370, 1224, 1096, 1105,
   1017, 1010, 1036, 991, 932, 932, 880 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 42.93098, 42.68854, 41.97646, 42.59582, 41.10829, 40.91558, 41.20432, 41.51488, 41.26422, 40.92765, 41.53867, 41.31208, 41.78771, 42.33982, 44.5472, 45.21925, 47.92778,
   51.37726, 54.10998, 60.35433, 69.15809, 80.2171, 91.12014, 99.48125, 98.24842, 86.42094, 68.94962, 53.53008, 42.70012, 36.51689, 34.48928, 32.60967, 32.7453,
   31.39436, 31.28443, 31.69084, 30.98412, 30.03277, 30.03277, 29.16901 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 43.93098, 43.68854, 42.97646, 43.59582, 42.10829, 41.91558, 42.20432, 42.51488, 42.26422, 41.92765, 42.53867, 42.31208, 42.78771, 43.33982, 45.5472, 46.21925, 48.92778,
   52.37726, 55.10998, 61.35433, 70.15809, 81.2171, 92.12014, 100.4812, 99.24842, 87.42094, 69.94962, 54.53008, 43.70012, 37.51689, 35.48928, 33.60967, 33.7453,
   32.39436, 32.28443, 32.69084, 31.98412, 31.03277, 31.03277, 30.16901 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(765.7479);
   Graph_h_dataWithSWeights3001->SetMaximum(11021.05);
   Graph_h_dataWithSWeights3001->SetDirectory(nullptr);
   Graph_h_dataWithSWeights3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataWithSWeights3001->SetLineColor(ci);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetTitleFont(42);
   Graph_h_dataWithSWeights3001->GetYaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetYaxis()->SetTitleFont(42);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataWithSWeights3001);
   
   grae->Draw("p");
   
   Double_t m_signal_fx1[86] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375,
   3.04375, 3.05, 3.0625, 3.065625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125,
   3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175, 3.18125, 3.1875,
   3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4,
   3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[86] = { 3.003644, 4.041095, 5.457373, 7.398506, 10.06987, 13.76159, 18.88535, 26.0281, 36.03065, 50.10338, 69.99752, 98.26004, 138.615, 196.5375, 280.1229, 401.4103, 578.4119,
   695.8062, 838.2435, 1011.33, 1221.987, 1478.773, 1792.293, 1974.322, 2175.702, 2398.581, 2645.358, 2918.711, 3221.629, 3557.456, 3929.927, 4343.221, 4802.014,
   5311.542, 5877.666, 7109.74, 7390.997, 7653.425, 7894.273, 8110.956, 8301.096, 8462.573, 8593.556, 8692.545, 8758.394, 8790.338, 8788.004, 8751.418, 8681.008,
   8577.592, 8442.366, 8276.877, 8082.996, 7862.882, 7618.943, 7353.789, 6771.03, 6137.796, 4812.495, 4162.656, 3544.743, 2971.757, 2452.764, 1993.024, 1594.349,
   1255.65, 973.5712, 743.1579, 558.4812, 413.1904, 300.9581, 215.8122, 152.3562, 105.8908, 82.07388, 82.07388, 82.07388, 82.07388, 82.07388, 82.07388, 82.07388,
   82.07388, 82.07388, 82.07388, 82.07388, 82.07388 };
   TGraph *graph = new TGraph(86,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(2.703279);
   Graph_m_signal1->SetMaximum(9669.072);
   Graph_m_signal1->SetDirectory(nullptr);
   Graph_m_signal1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_m_signal1->SetLineColor(ci);
   Graph_m_signal1->GetXaxis()->SetLabelFont(42);
   Graph_m_signal1->GetXaxis()->SetTitleOffset(1);
   Graph_m_signal1->GetXaxis()->SetTitleFont(42);
   Graph_m_signal1->GetYaxis()->SetLabelFont(42);
   Graph_m_signal1->GetYaxis()->SetTitleFont(42);
   Graph_m_signal1->GetZaxis()->SetLabelFont(42);
   Graph_m_signal1->GetZaxis()->SetTitleOffset(1);
   Graph_m_signal1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_m_signal1);
   
   graph->Draw("l");
   
   Double_t m_bkg_fx2[42] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.925, 2.95, 2.975, 3, 3.025, 3.05, 3.075, 3.1, 3.125, 3.15, 3.175, 3.2, 3.225, 3.25, 3.275, 3.3,
   3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_bkg_fy2[42] = { 1906.118, 1864.162, 1827.124, 1794.658, 1766.426, 1742.091, 1721.311, 1703.735, 1688.993, 1676.69, 1666.404, 1657.676, 1650.014, 1642.887, 1635.734, 1627.967, 1618.989,
   1608.208, 1595.061, 1579.04, 1559.717, 1536.774, 1510.019, 1479.404, 1445.027, 1407.128, 1366.068, 1322.309, 1276.377, 1228.838, 1180.258, 1131.182, 1082.109,
   1033.481, 985.67, 938.9796, 893.6457, 849.8416, 807.6856, 767.249, 728.5646, 728.5646 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(610.8092);
   Graph_m_bkg2->SetMaximum(2023.874);
   Graph_m_bkg2->SetDirectory(nullptr);
   Graph_m_bkg2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_m_bkg2->SetLineColor(ci);
   Graph_m_bkg2->GetXaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetXaxis()->SetTitleOffset(1);
   Graph_m_bkg2->GetXaxis()->SetTitleFont(42);
   Graph_m_bkg2->GetYaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetYaxis()->SetTitleFont(42);
   Graph_m_bkg2->GetZaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetZaxis()->SetTitleOffset(1);
   Graph_m_bkg2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_m_bkg2);
   
   graph->Draw("l");
   
   Double_t massModel_fx3[86] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375,
   3.04375, 3.05, 3.0625, 3.065625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125,
   3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175, 3.18125, 3.1875,
   3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4,
   3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[86] = { 1909.122, 1868.203, 1832.581, 1802.056, 1776.496, 1755.852, 1740.197, 1729.764, 1725.024, 1726.794, 1736.402, 1755.936, 1788.629, 1839.425, 1915.857, 2029.378, 2197.401,
   2309.667, 2446.452, 2613.294, 2817.048, 3066.212, 3371.332, 3548.856, 3745.516, 3963.458, 4205.075, 4473.041, 4770.342, 5100.318, 5466.701, 5873.668, 6325.893,
   6828.611, 7387.685, 8604.931, 8882.33, 9140.841, 9377.713, 9590.359, 9776.405, 9933.728, 10060.5, 10155.22, 10216.74, 10244.3, 10237.53, 10196.45, 10121.48,
   10013.46, 9873.577, 9703.375, 9504.729, 9279.797, 9030.989, 8760.917, 8168.173, 7524.763, 6178.564, 5518.017, 4889.237, 4305.23, 3775.073, 3304.032, 2893.929,
   2543.683, 2249.948, 2007.779, 1811.254, 1654.033, 1529.796, 1432.581, 1356.999, 1298.361, 1262.332, 1213.256, 1164.183, 1115.555, 1067.744, 1021.054, 975.7196,
   931.9155, 889.7595, 849.3228, 810.6385, 810.6385 };
   graph = new TGraph(86,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(729.5747);
   Graph_massModel3->SetMaximum(11187.67);
   Graph_massModel3->SetDirectory(nullptr);
   Graph_massModel3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_massModel3->SetLineColor(ci);
   Graph_massModel3->GetXaxis()->SetLabelFont(42);
   Graph_massModel3->GetXaxis()->SetTitleOffset(1);
   Graph_massModel3->GetXaxis()->SetTitleFont(42);
   Graph_massModel3->GetYaxis()->SetLabelFont(42);
   Graph_massModel3->GetYaxis()->SetTitleFont(42);
   Graph_massModel3->GetZaxis()->SetLabelFont(42);
   Graph_massModel3->GetZaxis()->SetTitleOffset(1);
   Graph_massModel3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_massModel3);
   
   graph->Draw("l");
   
   TH1D *frame_mass_dc8b910__2 = new TH1D("frame_mass_dc8b910__2"," ",40,2.5,3.5);
   frame_mass_dc8b910__2->SetBinContent(1,10756.52);
   frame_mass_dc8b910__2->SetMinimum(5);
   frame_mass_dc8b910__2->SetMaximum(14000);
   frame_mass_dc8b910__2->SetEntries(2);
   frame_mass_dc8b910__2->SetDirectory(nullptr);
   frame_mass_dc8b910__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_dc8b910__2->SetLineColor(ci);
   frame_mass_dc8b910__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_dc8b910__2->GetXaxis()->SetLabelFont(42);
   frame_mass_dc8b910__2->GetXaxis()->SetLabelSize(0.04);
   frame_mass_dc8b910__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_dc8b910__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_dc8b910__2->GetXaxis()->SetTitleFont(42);
   frame_mass_dc8b910__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_dc8b910__2->GetYaxis()->SetLabelFont(42);
   frame_mass_dc8b910__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_dc8b910__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_dc8b910__2->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_dc8b910__2->GetYaxis()->SetTitleFont(42);
   frame_mass_dc8b910__2->GetZaxis()->SetLabelFont(42);
   frame_mass_dc8b910__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_dc8b910__2->GetZaxis()->SetTitleFont(42);
   frame_mass_dc8b910__2->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.79,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.74,"2 GeV/c < #it{p}_{T}^{#mu#mu} < 3 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 51879#pm285");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 57186#pm295");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.73,0.77,0.89,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m_signal","Signal","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m_bkg","Background","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("massModel","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4769739,0.94,0.5230261,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 54 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
  
// ------------>Primitives in pad: pad2_PP
   TPad *pad2_PP__1 = new TPad("pad2_PP", "",0,0,1,0.238);
   pad2_PP__1->Draw();
   pad2_PP__1->cd();
   pad2_PP__1->Range(2.375,-13.76667,3.625,5.9);
   pad2_PP__1->SetFillColor(0);
   pad2_PP__1->SetBorderMode(0);
   pad2_PP__1->SetBorderSize(2);
   pad2_PP__1->SetTopMargin(0);
   pad2_PP__1->SetBottomMargin(0.4);
   pad2_PP__1->SetFrameBorderMode(0);
   pad2_PP__1->SetFrameBorderMode(0);
   
   TH1D *frame_mass_10a36b30__3 = new TH1D("frame_mass_10a36b30__3"," ",100,2.5,3.5);
   frame_mass_10a36b30__3->SetBinContent(1,3.455085);
   frame_mass_10a36b30__3->SetMinimum(-5.9);
   frame_mass_10a36b30__3->SetMaximum(5.9);
   frame_mass_10a36b30__3->SetEntries(1);
   frame_mass_10a36b30__3->SetDirectory(nullptr);
   frame_mass_10a36b30__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_10a36b30__3->SetLineColor(ci);
   frame_mass_10a36b30__3->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_10a36b30__3->GetXaxis()->SetLabelFont(42);
   frame_mass_10a36b30__3->GetXaxis()->SetLabelSize(0.12);
   frame_mass_10a36b30__3->GetXaxis()->SetTitleSize(0.14);
   frame_mass_10a36b30__3->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_10a36b30__3->GetXaxis()->SetTitleFont(42);
   frame_mass_10a36b30__3->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_10a36b30__3->GetYaxis()->SetNdivisions(6);
   frame_mass_10a36b30__3->GetYaxis()->SetLabelFont(42);
   frame_mass_10a36b30__3->GetYaxis()->SetLabelSize(0.12);
   frame_mass_10a36b30__3->GetYaxis()->SetTitleSize(0.12);
   frame_mass_10a36b30__3->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_10a36b30__3->GetYaxis()->SetTitleFont(42);
   frame_mass_10a36b30__3->GetZaxis()->SetLabelFont(42);
   frame_mass_10a36b30__3->GetZaxis()->SetTitleOffset(1);
   frame_mass_10a36b30__3->GetZaxis()->SetTitleFont(42);
   frame_mass_10a36b30__3->Draw("FUNC");
   
   Double_t pull_h_dataWithSWeights_massModel_fx3002[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t pull_h_dataWithSWeights_massModel_fy3002[40] = { -0.06060666, 0.3421982, -0.3099096, 1.589921, -0.8353189, -0.7878774, 0.09756187, 0.9058524, 0.4384228, -0.3720146, 0.5014843, -0.5738976, -0.6082822, -0.9838725, 1.265686, -0.5060547, 0.6093197,
   1.332848, -1.781912, -0.9536143, 0.8256858, 1.88437, -1.807098, -0.6839871, 1.274709, 0.5949395, -1.419962, -0.3583084, 0.5917009, -0.02668545, -0.388675, -2.758717, -1.033303,
   -2.304395, -1.065488, 1.186887, 1.200048, 0.7046475, 2.07969, 1.714811 };
   Double_t pull_h_dataWithSWeights_massModel_felx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fely3002[40] = { 0.977237, 1, 0.9767315, 1, 0.9762517, 0.9761425, 1, 1, 1, 0.9761494, 1, 0.9763661, 0.9766288, 0.9769265, 1, 0.978364, 1,
   1, 0.9818545, 0.9837012, 1, 1, 0.9891446, 0.9900479, 1, 1, 0.985704, 0.9816615, 1, 0.9733453, 0.9718225, 0.9702467, 0.9703662,
   0.9691304, 0.9690253, 1, 1, 1, 1, 1 };
   Double_t pull_h_dataWithSWeights_massModel_fehx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fehy3002[40] = { 1, 1.023425, 1, 1.023476, 1, 1, 1.024269, 1.024088, 1.024234, 1, 1.024074, 1, 1, 1, 1.022448, 1, 1.020865,
   1.019464, 1, 1, 1.01446, 1.012466, 1, 1, 1.010178, 1.011571, 1, 1, 1.023419, 1, 1, 1, 1,
   1, 1, 1.031555, 1.032275, 1.033297, 1.033297, 1.034283 };
   grae = new TGraphAsymmErrors(40,pull_h_dataWithSWeights_massModel_fx3002,pull_h_dataWithSWeights_massModel_fy3002,pull_h_dataWithSWeights_massModel_felx3002,pull_h_dataWithSWeights_massModel_fehx3002,pull_h_dataWithSWeights_massModel_fely3002,pull_h_dataWithSWeights_massModel_fehy3002);
   grae->SetName("pull_h_dataWithSWeights_massModel");
   grae->SetTitle("Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_pull_h_dataWithSWeights_massModel3002 = new TH1F("Graph_pull_h_dataWithSWeights_massModel3002","Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel",100,2.415,3.585);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMinimum(-4.413158);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMaximum(3.797182);
   Graph_pull_h_dataWithSWeights_massModel3002->SetDirectory(nullptr);
   Graph_pull_h_dataWithSWeights_massModel3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_pull_h_dataWithSWeights_massModel3002->SetLineColor(ci);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetRange(8,93);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitleOffset(1);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitleFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetTitleFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetTitleOffset(1);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_pull_h_dataWithSWeights_massModel3002);
   
   grae->Draw("px");
   
   TH1D *frame_mass_10a36b30__4 = new TH1D("frame_mass_10a36b30__4"," ",100,2.5,3.5);
   frame_mass_10a36b30__4->SetBinContent(1,3.455085);
   frame_mass_10a36b30__4->SetMinimum(-5.9);
   frame_mass_10a36b30__4->SetMaximum(5.9);
   frame_mass_10a36b30__4->SetEntries(1);
   frame_mass_10a36b30__4->SetDirectory(nullptr);
   frame_mass_10a36b30__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_10a36b30__4->SetLineColor(ci);
   frame_mass_10a36b30__4->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_10a36b30__4->GetXaxis()->SetLabelFont(42);
   frame_mass_10a36b30__4->GetXaxis()->SetLabelSize(0.12);
   frame_mass_10a36b30__4->GetXaxis()->SetTitleSize(0.14);
   frame_mass_10a36b30__4->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_10a36b30__4->GetXaxis()->SetTitleFont(42);
   frame_mass_10a36b30__4->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_10a36b30__4->GetYaxis()->SetNdivisions(6);
   frame_mass_10a36b30__4->GetYaxis()->SetLabelFont(42);
   frame_mass_10a36b30__4->GetYaxis()->SetLabelSize(0.12);
   frame_mass_10a36b30__4->GetYaxis()->SetTitleSize(0.12);
   frame_mass_10a36b30__4->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_10a36b30__4->GetYaxis()->SetTitleFont(42);
   frame_mass_10a36b30__4->GetZaxis()->SetLabelFont(42);
   frame_mass_10a36b30__4->GetZaxis()->SetTitleOffset(1);
   frame_mass_10a36b30__4->GetZaxis()->SetTitleFont(42);
   frame_mass_10a36b30__4->Draw("AXISSAME");
   TLine *line = new TLine(2.5,0,3.5,0);
   line->Draw();
   line = new TLine(2.5,2,3.5,2);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.5,-2,3.5,-2);
   line->SetLineStyle(2);
   line->Draw();
   
   pt = new TPaveText(0.485992,0.94,0.514008,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad2_PP__1->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);
}
