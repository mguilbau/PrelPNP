#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 2DFitbis_pT15_30()
{
//=========Macro generated from canvas: 2DFitbis/2DFitbis
//=========  (Mon Mar 31 13:15:42 2025) by ROOT version 6.32.06
   TCanvas *2DFitbis = new TCanvas("2DFitbis", "2DFitbis",200,1103,1000,800);
   2DFitbis->Range(0,0,1,1);
   2DFitbis->SetFillColor(0);
   2DFitbis->SetBorderMode(0);
   2DFitbis->SetBorderSize(2);
   2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__6 = new TPad("pad1_2DFitbis", "",0,0.23,1,1);
   pad1_2DFitbis__6->Draw();
   pad1_2DFitbis__6->cd();
   pad1_2DFitbis__6->Range(-12.5,0.69897,12.5,6.589003);
   pad1_2DFitbis__6->SetFillColor(0);
   pad1_2DFitbis__6->SetBorderMode(0);
   pad1_2DFitbis__6->SetBorderSize(2);
   pad1_2DFitbis__6->SetLogy();
   pad1_2DFitbis__6->SetBottomMargin(0);
   pad1_2DFitbis__6->SetFrameBorderMode(0);
   pad1_2DFitbis__6->SetFrameBorderMode(0);
   
   TH1D *frame_tau_e795340__13 = new TH1D("frame_tau_e795340__13"," ",80,-10,10);
   frame_tau_e795340__13->SetBinContent(1,2498.95);
   frame_tau_e795340__13->SetMinimum(5);
   frame_tau_e795340__13->SetMaximum(1000000);
   frame_tau_e795340__13->SetEntries(3);
   frame_tau_e795340__13->SetDirectory(nullptr);
   frame_tau_e795340__13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_e795340__13->SetLineColor(ci);
   frame_tau_e795340__13->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e795340__13->GetXaxis()->SetLabelFont(42);
   frame_tau_e795340__13->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e795340__13->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e795340__13->GetXaxis()->SetTitleOffset(1);
   frame_tau_e795340__13->GetXaxis()->SetTitleFont(42);
   frame_tau_e795340__13->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e795340__13->GetYaxis()->SetLabelFont(42);
   frame_tau_e795340__13->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e795340__13->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e795340__13->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_e795340__13->GetYaxis()->SetTitleFont(42);
   frame_tau_e795340__13->GetZaxis()->SetLabelFont(42);
   frame_tau_e795340__13->GetZaxis()->SetTitleOffset(1);
   frame_tau_e795340__13->GetZaxis()->SetTitleFont(42);
   frame_tau_e795340__13->Draw("FUNC");
   
   Double_t h_data_fx3007[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3007[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
   3, 2, 8, 9, 6, 21, 516, 951, 263, 152, 83, 41, 20, 11, 10, 4,
   5, 3, 2, 3, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_felx3007[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3007[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.8272462,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.159691,
   1.632705, 1.291815, 2.768386, 2.943461, 2.379931, 4.545807, 22.22114, 30.34234, 15.72498, 11.83896, 9.092044, 6.376898, 4.434448, 3.265579, 3.108694, 1.914339,
   2.159691, 1.632705, 1.291815, 1.632705, 0, 0, 0, 0.8272462, 0, 0, 0, 0, 0.8272462, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_fehx3007[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3007[80] = { 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527,
   1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 3.382473,
   2.918186, 2.63786, 3.945142, 4.110204, 3.583642, 5.655182, 23.22114, 31.34234, 16.72498, 12.83896, 10.14705, 7.455185, 5.546519, 4.416521, 4.26695, 3.162753,
   3.382473, 2.918186, 2.63786, 2.918186, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874,
   1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3007,h_data_fy3007,h_data_felx3007,h_data_fehx3007,h_data_fely3007,h_data_fehy3007);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3007 = new TH1F("Graph_h_data3007","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3007->SetMinimum(1.080577);
   Graph_h_data3007->SetMaximum(1080.577);
   Graph_h_data3007->SetDirectory(nullptr);
   Graph_h_data3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data3007->SetLineColor(ci);
   Graph_h_data3007->GetXaxis()->SetLabelFont(42);
   Graph_h_data3007->GetXaxis()->SetTitleOffset(1);
   Graph_h_data3007->GetXaxis()->SetTitleFont(42);
   Graph_h_data3007->GetYaxis()->SetLabelFont(42);
   Graph_h_data3007->GetYaxis()->SetTitleFont(42);
   Graph_h_data3007->GetZaxis()->SetLabelFont(42);
   Graph_h_data3007->GetZaxis()->SetTitleOffset(1);
   Graph_h_data3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data3007);
   
   grae->Draw("p");
   
   Double_t model2_fx11[112] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy11[112] = { 0.0003315675, 0.0004276855, 0.000551667, 0.0007115895, 0.0009178719, 0.001183953, 0.001527169, 0.001969879, 0.002540926, 0.003277514, 0.004227631, 0.005453177, 0.007033996, 0.009073078, 0.01170327, 0.01509592, 0.01947207,
   0.02511682, 0.03239793, 0.04178974, 0.05390415, 0.0695304, 0.08968653, 0.1156857, 0.1492218, 0.1924796, 0.2482775, 0.3202505, 0.4130878, 0.5328376, 0.6873021, 0.8865471, 1.14357,
   1.475236, 1.903972, 2.46337, 3.228954, 4.52036, 5.785822, 8.283955, 10.50332, 13.90897, 19.23957, 23.01976, 27.9578, 34.71221, 44.47415, 59.1375, 83.06641,
   136.6013, 266.7719, 439.3254, 480.987, 386.1964, 304.1122, 265.2274, 241.0646, 221.1948, 203.9975, 188.7383, 174.8903, 162.1575, 150.3867, 129.3882, 111.3617,
   95.88299, 82.58972, 71.17115, 61.36089, 52.93052, 45.68418, 39.45392, 29.48607, 22.10377, 16.62793, 12.55884, 9.528664, 5.572986, 3.341619, 2.06244, 1.313934,
   0.8648661, 0.5875239, 0.4107143, 0.2942541, 0.2150894, 0.1597174, 0.1200278, 0.09100525, 0.06944796, 0.05324413, 0.04095641, 0.03157832, 0.02438777, 0.01885634, 0.01459131, 0.01129735,
   0.008750449, 0.006779592, 0.005253637, 0.004071689, 0.003155946, 0.002446316, 0.001896336, 0.001470048, 0.001139613, 0.0008834655, 0.000684899, 0.000530966, 0.000411632, 0.0003191193, 0.0003191193 };
   TGraph *graph = new TGraph(112,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",112,-12,12);
   Graph_model211->SetMinimum(0.0002872074);
   Graph_model211->SetMaximum(529.0856);
   Graph_model211->SetDirectory(nullptr);
   Graph_model211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model211->SetLineColor(ci);
   Graph_model211->GetXaxis()->SetLabelFont(42);
   Graph_model211->GetXaxis()->SetTitleOffset(1);
   Graph_model211->GetXaxis()->SetTitleFont(42);
   Graph_model211->GetYaxis()->SetLabelFont(42);
   Graph_model211->GetYaxis()->SetTitleFont(42);
   Graph_model211->GetZaxis()->SetLabelFont(42);
   Graph_model211->GetZaxis()->SetTitleOffset(1);
   Graph_model211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model211);
   
   graph->Draw("l");
   
   Double_t tausigModel_fx12[98] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0,
   0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10 };
   Double_t tausigModel_fy12[98] = { 0.06368881, 0.06585805, 0.06816075, 0.070609, 0.07321631, 0.07599793, 0.07897104, 0.08215507, 0.08557213, 0.08924744, 0.09320988, 0.09749268, 0.1021343, 0.1071793, 0.1126799, 0.1186974, 0.1253043,
   0.1325868, 0.1406484, 0.1496143, 0.159637, 0.1709044, 0.1836505, 0.1981695, 0.2148372, 0.2341398, 0.2567172, 0.2834277, 0.3154472, 0.3544279, 0.4027602, 0.4640262, 0.5438257,
   0.6513859, 0.8029641, 1.029848, 1.400102, 2.091476, 3.736207, 5.726107, 11.68912, 16.90421, 28.66706, 54.51972, 106.2008, 204.7503, 505.5666, 1238.24, 1741.74,
   1275.029, 530.9516, 211.2944, 109.4395, 56.21474, 29.4687, 17.25743, 11.85089, 5.759366, 3.751847, 2.097103, 1.402877, 1.031464, 0.8040068, 0.6521073, 0.5443507,
   0.4644233, 0.4030697, 0.354675, 0.3156485, 0.2835945, 0.2568573, 0.2342589, 0.2149396, 0.1982583, 0.1837282, 0.1709729, 0.1596977, 0.1496684, 0.140697, 0.1326306, 0.1253439,
   0.1187334, 0.1127128, 0.1072094, 0.1021619, 0.09751817, 0.09323343, 0.08926926, 0.08559239, 0.08217393, 0.07898863, 0.07601438, 0.07323171, 0.07062344, 0.06817433, 0.06587083, 0.06370086,
   0.06370086 };
   graph = new TGraph(98,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",100,-12,12);
   Graph_tausigModel12->SetMinimum(0.05731993);
   Graph_tausigModel12->SetMaximum(1915.908);
   Graph_tausigModel12->SetDirectory(nullptr);
   Graph_tausigModel12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tausigModel12->SetLineColor(ci);
   Graph_tausigModel12->GetXaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetXaxis()->SetTitleOffset(1);
   Graph_tausigModel12->GetXaxis()->SetTitleFont(42);
   Graph_tausigModel12->GetYaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetYaxis()->SetTitleFont(42);
   Graph_tausigModel12->GetZaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetZaxis()->SetTitleOffset(1);
   Graph_tausigModel12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tausigModel12);
   
   graph->Draw("l");
   
   Double_t exp_np_fx13[115] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625,
   0.09375, 0.125, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375,
   0.625, 0.65625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625, 1.75,
   2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75,
   6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75,
   10, 10 };
   Double_t exp_np_fy13[115] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5.791612e-304, 2.615353e-251, 1.167066e-203, 5.158162e-161,
   2.265285e-123, 9.931321e-91, 4.377832e-63, 1.96341e-40, 9.154382e-23, 4.645631e-10, 0.02911994, 0.4613963, 1.431607, 3.823156, 9.504879, 25.89992, 72.61797, 157.2254, 236.2625, 268.2566,
   265.4713, 251.2949, 217.6777, 201.3587, 186.0354, 171.8076, 158.6498, 146.4959, 135.2724, 124.9086, 115.3389, 106.5023, 98.34272, 90.80828, 83.85109, 77.42692,
   71.49493, 66.01742, 60.95956, 51.97666, 44.31746, 37.78691, 32.2187, 27.471, 23.42292, 19.97136, 17.02841, 14.51913, 10.55538, 7.673735, 5.578788, 4.055766,
   2.143577, 1.132936, 0.5987856, 0.3164736, 0.1672645, 0.08840357, 0.04672357, 0.02469461, 0.01305174, 0.006898178, 0.003645865, 0.001926933, 0.001018434, 0.0005382686, 0.0002844888, 0.0001503597,
   7.946895e-05, 4.200138e-05, 2.219881e-05, 1.173264e-05, 6.201004e-06, 3.277391e-06, 1.732185e-06, 9.155045e-07, 4.838677e-07, 2.557365e-07, 1.351633e-07, 7.143731e-08, 3.775646e-08, 1.995526e-08, 1.054687e-08, 5.574291e-09,
   2.946157e-09, 2.946157e-09 };
   graph = new TGraph(115,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",115,-12,12);
   Graph_exp_np13->SetMinimum(0.2950823);
   Graph_exp_np13->SetMaximum(295.0823);
   Graph_exp_np13->SetDirectory(nullptr);
   Graph_exp_np13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_exp_np13->SetLineColor(ci);
   Graph_exp_np13->GetXaxis()->SetLabelFont(42);
   Graph_exp_np13->GetXaxis()->SetTitleOffset(1);
   Graph_exp_np13->GetXaxis()->SetTitleFont(42);
   Graph_exp_np13->GetYaxis()->SetLabelFont(42);
   Graph_exp_np13->GetYaxis()->SetTitleFont(42);
   Graph_exp_np13->GetZaxis()->SetLabelFont(42);
   Graph_exp_np13->GetZaxis()->SetTitleOffset(1);
   Graph_exp_np13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_exp_np13);
   
   graph->Draw("l");
   
   Double_t Fit_Total_fx14[103] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.4375, 0.5, 0.625, 0.75, 0.875,
   1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[103] = { 0.06402038, 0.06628574, 0.06871242, 0.07132058, 0.07413419, 0.07718189, 0.08049821, 0.08412495, 0.08811306, 0.09252495, 0.09743751, 0.1029459, 0.1091683, 0.1162524, 0.1243832, 0.1337933, 0.1447763,
   0.1577036, 0.1730463, 0.191404, 0.2135411, 0.2404348, 0.273337, 0.3138552, 0.364059, 0.4266194, 0.5049947, 0.6036782, 0.7285349, 0.8872655, 1.090062, 1.350573, 1.687396,
   2.126622, 2.706936, 3.493219, 4.629055, 6.611837, 12.02016, 19.63509, 26.84877, 39.67604, 51.74251, 73.60261, 115.0888, 193.0904, 350.8564, 798.2385, 1750.183,
   2379.953, 1897.488, 1103.32, 741.9931, 601.7991, 512.0237, 451.1438, 407.3544, 372.7767, 316.702, 270.4199, 231.2688, 197.9776, 145.3831, 107.0043, 78.93003,
   58.35994, 32.17853, 18.00641, 10.28086, 6.029547, 3.659799, 2.315789, 1.536015, 1.070437, 0.7827124, 0.5978349, 0.4740429, 0.3877087, 0.3251843, 0.2783793, 0.2423478,
   0.2139603, 0.1911631, 0.1725598, 0.1571687, 0.1442797, 0.1333668, 0.1240323, 0.1159716, 0.1089477, 0.1027751, 0.09730685, 0.09242612, 0.08803919, 0.08407052, 0.08045881, 0.07715406,
   0.07411522, 0.07130836, 0.06870531, 0.06628247, 0.06401998, 0.06401998 };
   graph = new TGraph(103,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",103,-12,12);
   Graph_Fit_Total14->SetMinimum(0.05761798);
   Graph_Fit_Total14->SetMaximum(2617.941);
   Graph_Fit_Total14->SetDirectory(nullptr);
   Graph_Fit_Total14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Fit_Total14->SetLineColor(ci);
   Graph_Fit_Total14->GetXaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetXaxis()->SetTitleOffset(1);
   Graph_Fit_Total14->GetXaxis()->SetTitleFont(42);
   Graph_Fit_Total14->GetYaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetYaxis()->SetTitleFont(42);
   Graph_Fit_Total14->GetZaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetZaxis()->SetTitleOffset(1);
   Graph_Fit_Total14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Fit_Total14);
   
   graph->Draw("l");
   
   TH1D *frame_tau_e795340__14 = new TH1D("frame_tau_e795340__14"," ",80,-10,10);
   frame_tau_e795340__14->SetBinContent(1,2498.95);
   frame_tau_e795340__14->SetMinimum(5);
   frame_tau_e795340__14->SetMaximum(1000000);
   frame_tau_e795340__14->SetEntries(3);
   frame_tau_e795340__14->SetDirectory(nullptr);
   frame_tau_e795340__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e795340__14->SetLineColor(ci);
   frame_tau_e795340__14->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e795340__14->GetXaxis()->SetLabelFont(42);
   frame_tau_e795340__14->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e795340__14->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e795340__14->GetXaxis()->SetTitleOffset(1);
   frame_tau_e795340__14->GetXaxis()->SetTitleFont(42);
   frame_tau_e795340__14->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e795340__14->GetYaxis()->SetLabelFont(42);
   frame_tau_e795340__14->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e795340__14->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e795340__14->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_e795340__14->GetYaxis()->SetTitleFont(42);
   frame_tau_e795340__14->GetZaxis()->SetLabelFont(42);
   frame_tau_e795340__14->GetZaxis()->SetTitleOffset(1);
   frame_tau_e795340__14->GetZaxis()->SetTitleFont(42);
   frame_tau_e795340__14->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE preliminary, pp, #sqrt{s} = 13.6 TeV");
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
      tex = new TLatex(0.15,0.74,"15 GeV/c < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 1352#pm46");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 768#pm39");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.404266#pm0.020456");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.72,0.75,0.89,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fit_Total","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tausigModel","Prompt","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Background","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("exp_np","Non-prompt","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4764729,0.94,0.5235271,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 22 / 19 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1_2DFitbis__6->Modified();
   2DFitbis->cd();
  
// ------------>Primitives in pad: pad2_2DFitbis
   TPad *pad2_2DFitbis__7 = new TPad("pad2_2DFitbis", "",0,0,1,0.228);
   pad2_2DFitbis__7->Draw();
   pad2_2DFitbis__7->cd();
   pad2_2DFitbis__7->Range(-12.5,-13.76667,12.5,5.9);
   pad2_2DFitbis__7->SetFillColor(0);
   pad2_2DFitbis__7->SetBorderMode(0);
   pad2_2DFitbis__7->SetBorderSize(2);
   pad2_2DFitbis__7->SetTopMargin(0);
   pad2_2DFitbis__7->SetBottomMargin(0.4);
   pad2_2DFitbis__7->SetFrameBorderMode(0);
   pad2_2DFitbis__7->SetFrameBorderMode(0);
   
   TH1D *frame_tau_e8d65d0__15 = new TH1D("frame_tau_e8d65d0__15"," ",25,-10,10);
   frame_tau_e8d65d0__15->SetMinimum(-5.9);
   frame_tau_e8d65d0__15->SetMaximum(5.9);
   frame_tau_e8d65d0__15->SetDirectory(nullptr);
   frame_tau_e8d65d0__15->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e8d65d0__15->SetLineColor(ci);
   frame_tau_e8d65d0__15->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e8d65d0__15->GetXaxis()->SetLabelFont(42);
   frame_tau_e8d65d0__15->GetXaxis()->SetLabelSize(0.12);
   frame_tau_e8d65d0__15->GetXaxis()->SetTitleSize(0.14);
   frame_tau_e8d65d0__15->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_e8d65d0__15->GetXaxis()->SetTitleFont(42);
   frame_tau_e8d65d0__15->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_e8d65d0__15->GetYaxis()->SetNdivisions(6);
   frame_tau_e8d65d0__15->GetYaxis()->SetLabelFont(42);
   frame_tau_e8d65d0__15->GetYaxis()->SetLabelSize(0.12);
   frame_tau_e8d65d0__15->GetYaxis()->SetTitleSize(0.12);
   frame_tau_e8d65d0__15->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_e8d65d0__15->GetYaxis()->SetTitleFont(42);
   frame_tau_e8d65d0__15->GetZaxis()->SetLabelFont(42);
   frame_tau_e8d65d0__15->GetZaxis()->SetTitleOffset(1);
   frame_tau_e8d65d0__15->GetZaxis()->SetTitleFont(42);
   frame_tau_e8d65d0__15->Draw("FUNC");
   
   Double_t hpullbis_fx3008[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpullbis_fy3008[80] = { -0.05675974, -0.05880354, -0.06099666, -0.06335831, -0.06591142, -0.06868351, -0.07170782, -0.07502476, -0.0786837, -0.08274531, -0.08728453, -0.0923943, -0.09819046, -0.1048179, -0.1124585, -0.1213415, 1.026007,
   -0.1440706, -0.1587501, -0.1763891, -0.1977464, -0.2237927, -0.2557737, -0.2952911, -0.3444098, -0.4057996, -0.4829243, -0.5802957, -0.7038228, -0.8612997, -1.063111, -1.323302, 1.432145,
   0.3572116, -0.417034, 1.422801, 1.148157, -0.9253157, -0.183884, -2.231894, 2.127856, -0.7738104, 0.2587215, 0.2413021, -0.5726533, -0.9181375, -0.7117895, 0.5934313, -0.2670688,
   0.9317101, 0.6578642, 0.5393763, 1.269933, -0.6013494, -0.4668968, -0.3753684, 0.7779467, -0.2629049, -0.2268223, -0.1987622, -0.1764668, 0.9889904, -0.1436257, -0.1313072, -0.1209394,
   -0.1121199, -0.1045428, -0.09797209, -0.09222385, -0.08715323, -0.08264535, -0.07860847, -0.07496888, -0.07166695, -0.06865423, -0.06589104, -0.06334472, -0.06098823, -0.05879902, -0.05675815 };
   Double_t hpullbis_felx3008[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpullbis_fely3008[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   1, 0.4897207, 1, 1, 0.6641098, 0.8038304, 0.9569358, 1, 0.9402092, 1, 1, 0.8553641, 0.7995011, 0.7394009, 1, 0.6052762,
   1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpullbis_fehx3008[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpullbis_fehy3008[80] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2.779737,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1.566184,
   1.787332, 1, 1.425069, 1.396385, 1, 1, 1, 1.032957, 1, 1.084467, 1.116036, 1, 1, 1, 1.372586, 1,
   1.566184, 1.787332, 2.04198, 1.787332, 1, 1, 1, 2.779737, 1, 1, 1, 1, 2.779737, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
   grae = new TGraphAsymmErrors(80,hpullbis_fx3008,hpullbis_fy3008,hpullbis_felx3008,hpullbis_fehx3008,hpullbis_fely3008,hpullbis_fehy3008);
   grae->SetName("hpullbis");
   grae->SetTitle("Pull of Histogram of data_plot__tau and Projection of Fit_Total");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpullbis3008 = new TH1F("Graph_hpullbis3008","Pull of Histogram of data_plot__tau and Projection of Fit_Total",100,-11.85,11.85);
   Graph_hpullbis3008->SetMinimum(-3.888287);
   Graph_hpullbis3008->SetMaximum(4.5052);
   Graph_hpullbis3008->SetDirectory(nullptr);
   Graph_hpullbis3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_hpullbis3008->SetLineColor(ci);
   Graph_hpullbis3008->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   Graph_hpullbis3008->GetXaxis()->SetRange(8,93);
   Graph_hpullbis3008->GetXaxis()->SetLabelFont(42);
   Graph_hpullbis3008->GetXaxis()->SetTitleOffset(1);
   Graph_hpullbis3008->GetXaxis()->SetTitleFont(42);
   Graph_hpullbis3008->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_hpullbis3008->GetYaxis()->SetLabelFont(42);
   Graph_hpullbis3008->GetYaxis()->SetTitleFont(42);
   Graph_hpullbis3008->GetZaxis()->SetLabelFont(42);
   Graph_hpullbis3008->GetZaxis()->SetTitleOffset(1);
   Graph_hpullbis3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hpullbis3008);
   
   grae->Draw("px");
   
   TH1D *frame_tau_e8d65d0__16 = new TH1D("frame_tau_e8d65d0__16"," ",25,-10,10);
   frame_tau_e8d65d0__16->SetMinimum(-5.9);
   frame_tau_e8d65d0__16->SetMaximum(5.9);
   frame_tau_e8d65d0__16->SetDirectory(nullptr);
   frame_tau_e8d65d0__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e8d65d0__16->SetLineColor(ci);
   frame_tau_e8d65d0__16->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e8d65d0__16->GetXaxis()->SetLabelFont(42);
   frame_tau_e8d65d0__16->GetXaxis()->SetLabelSize(0.12);
   frame_tau_e8d65d0__16->GetXaxis()->SetTitleSize(0.14);
   frame_tau_e8d65d0__16->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_e8d65d0__16->GetXaxis()->SetTitleFont(42);
   frame_tau_e8d65d0__16->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_e8d65d0__16->GetYaxis()->SetNdivisions(6);
   frame_tau_e8d65d0__16->GetYaxis()->SetLabelFont(42);
   frame_tau_e8d65d0__16->GetYaxis()->SetLabelSize(0.12);
   frame_tau_e8d65d0__16->GetYaxis()->SetTitleSize(0.12);
   frame_tau_e8d65d0__16->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_e8d65d0__16->GetYaxis()->SetTitleFont(42);
   frame_tau_e8d65d0__16->GetZaxis()->SetLabelFont(42);
   frame_tau_e8d65d0__16->GetZaxis()->SetTitleOffset(1);
   frame_tau_e8d65d0__16->GetZaxis()->SetTitleFont(42);
   frame_tau_e8d65d0__16->Draw("AXISSAME");
   TLine *line = new TLine(-10,0,10,0);
   line->Draw();
   line = new TLine(-10,2,10,2);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-10,-2,10,-2);
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
   pad2_2DFitbis__7->Modified();
   2DFitbis->cd();
   2DFitbis->Modified();
   2DFitbis->SetSelected(2DFitbis);
}
