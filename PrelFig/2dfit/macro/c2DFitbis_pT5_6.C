#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT5_6()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 17:29:15 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",1667,743,1000,800);
   c2DFitbis->Range(0,0,1,1);
   c2DFitbis->SetFillColor(0);
   c2DFitbis->SetBorderMode(0);
   c2DFitbis->SetBorderSize(2);
   c2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__3 = new TPad("pad1_2DFitbis", "",0,0,1,1);
   pad1_2DFitbis__3->Draw();
   pad1_2DFitbis__3->cd();
   pad1_2DFitbis__3->Range(-5,0.07396996,5,6.32397);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_110918c0__7 = new TH1D("frame_tau_110918c0__7"," ",80,-10,10);
   frame_tau_110918c0__7->SetBinContent(1,24238.73);
   frame_tau_110918c0__7->SetMinimum(5);
   frame_tau_110918c0__7->SetMaximum(500000);
   frame_tau_110918c0__7->SetEntries(3);
   frame_tau_110918c0__7->SetDirectory(nullptr);
   frame_tau_110918c0__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_110918c0__7->SetLineColor(ci);
   frame_tau_110918c0__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_110918c0__7->GetXaxis()->SetRange(25,56);
   frame_tau_110918c0__7->GetXaxis()->SetLabelFont(42);
   frame_tau_110918c0__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_110918c0__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_110918c0__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_110918c0__7->GetXaxis()->SetTitleFont(42);
   frame_tau_110918c0__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_110918c0__7->GetYaxis()->SetLabelFont(42);
   frame_tau_110918c0__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_110918c0__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_110918c0__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_110918c0__7->GetYaxis()->SetTitleFont(42);
   frame_tau_110918c0__7->GetZaxis()->SetLabelFont(42);
   frame_tau_110918c0__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_110918c0__7->GetZaxis()->SetTitleFont(42);
   frame_tau_110918c0__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 1, 1, 3, 1, 1, 0, 2, 3, 1, 0, 1, 0, 0, 7, 3, 4, 5,
   6, 8, 5, 7, 7, 7, 10, 10, 13, 15, 12, 14, 28, 17, 23, 31,
   37, 36, 76, 90, 150, 427, 8054, 10307, 1841, 888, 498, 262, 177, 120, 91, 67,
   40, 34, 17, 21, 13, 19, 10, 14, 7, 9, 9, 8, 7, 12, 4, 2,
   2, 5, 1, 1, 2, 0, 5, 0, 1, 2, 1, 2, 0, 1, 0 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 0.8272462, 0.8272462, 1.632705, 0.8272462, 0.8272462, 0, 1.291815, 1.632705, 0.8272462, 0, 0.8272462, 0, 0, 2.58147, 1.632705, 1.914339, 2.159691,
   2.379931, 2.768386, 2.159691, 2.58147, 2.58147, 2.58147, 3.108694, 3.108694, 3.558662, 3.82938, 3.415266, 3.6965, 5.259711, 4.082184, 4.760717, 5.537565,
   6.055143, 5.971996, 8.698576, 9.469177, 11.75765, 20.17003, 89.24547, 101.0246, 42.40979, 29.30352, 21.82151, 15.69413, 12.81353, 10.46586, 9.521834, 8.164873,
   6.298, 5.802128, 4.082184, 4.545807, 3.558662, 4.320219, 3.108694, 3.6965, 2.58147, 2.943461, 2.943461, 2.768386, 2.58147, 3.415266, 1.914339, 1.291815,
   1.291815, 2.159691, 0.8272462, 0.8272462, 1.291815, 0, 2.159691, 0, 0.8272462, 1.291815, 0.8272462, 1.291815, 0, 0.8272462, 0 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 2.299527, 2.299527, 2.918186, 2.299527, 2.299527, 1.147874, 2.63786, 2.918186, 2.299527, 1.147874, 2.299527, 1.147874, 1.147874, 3.770281, 2.918186, 3.162753, 3.382473,
   3.583642, 3.945142, 3.382473, 3.770281, 3.770281, 3.770281, 4.26695, 4.26695, 4.697573, 4.958738, 4.559819, 4.830381, 6.354446, 5.203719, 5.865235, 6.627601,
   7.137555, 7.055545, 9.756061, 10.522, 12.75765, 21.17003, 90.24547, 102.0246, 43.40979, 30.30352, 22.82151, 16.69413, 13.81353, 11.46586, 10.57436, 9.226102,
   7.377261, 6.888101, 5.203719, 5.655182, 4.697573, 5.435196, 4.26695, 4.830381, 3.770281, 4.110204, 4.110204, 3.945142, 3.770281, 4.559819, 3.162753, 2.63786,
   2.63786, 3.382473, 2.299527, 2.299527, 2.63786, 1.147874, 3.382473, 1.147874, 2.299527, 2.63786, 2.299527, 2.63786, 1.147874, 2.299527, 1.147874 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(11.44993);
   Graph_h_data3004->SetMaximum(11449.93);
   Graph_h_data3004->SetDirectory(nullptr);
   Graph_h_data3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data3004->SetLineColor(ci);
   Graph_h_data3004->GetXaxis()->SetLabelFont(42);
   Graph_h_data3004->GetXaxis()->SetTitleOffset(1);
   Graph_h_data3004->GetXaxis()->SetTitleFont(42);
   Graph_h_data3004->GetYaxis()->SetLabelFont(42);
   Graph_h_data3004->GetYaxis()->SetTitleFont(42);
   Graph_h_data3004->GetZaxis()->SetLabelFont(42);
   Graph_h_data3004->GetZaxis()->SetTitleOffset(1);
   Graph_h_data3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data3004);
   
   grae->Draw("p");
   
   Double_t model2_fx11[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy11[113] = { 0.160092, 0.186615, 0.2175321, 0.2535714, 0.2955815, 0.3445515, 0.4016345, 0.4681747, 0.5457388, 0.6361533, 0.741547, 0.8644017, 1.00761, 1.174544, 1.369135, 1.595964, 1.860373,
   2.168588, 2.527865, 2.946666, 3.43485, 4.003913, 4.667255, 5.440496, 6.341842, 7.392516, 8.61726, 10.04491, 11.70909, 13.64898, 15.91028, 18.54637, 21.62013,
   25.20885, 29.42719, 34.55927, 41.8584, 58.43653, 79.71436, 98.58006, 127.2144, 171.1777, 239.2294, 286.3685, 345.4073, 419.8194, 514.786, 638.4983, 803.8491,
   1030.276, 1348.447, 1813.994, 2507.77, 3429.959, 4298.016, 4617.935, 4194.958, 3381.179, 2640.651, 2139.59, 1820.288, 1601.471, 1438.522, 1308.927, 1199.694,
   1103.474, 1016.541, 864.1984, 735.6392, 626.9819, 535.1094, 457.3993, 391.6403, 288.8077, 214.9289, 161.693, 123.1867, 74.74206, 48.47956, 33.68284, 24.89857,
   19.33916, 15.56902, 12.83982, 10.75387, 9.093473, 7.734324, 6.601338, 5.646059, 4.834982, 4.143443, 3.552346, 3.046348, 2.612817, 2.241181, 1.922506, 1.649193,
   1.414762, 1.213668, 1.041164, 0.8931815, 0.7662341, 0.6573305, 0.5639056, 0.4837591, 0.4150038, 0.3560206, 0.3054205, 0.262012, 0.2247731, 0.1928268, 0.1654209, 0.1654209 };
   TGraph *graph = new TGraph(113,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",113,-12,12);
   Graph_model211->SetMinimum(0.1440828);
   Graph_model211->SetMaximum(5079.712);
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
   
   Double_t tausigModel_fx12[102] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10 };
   Double_t tausigModel_fy12[102] = { 0.9980063, 1.036464, 1.077464, 1.121251, 1.168095, 1.218307, 1.272234, 1.330274, 1.39288, 1.460574, 1.533953, 1.613711, 1.700653, 1.79572, 1.900019, 2.014855, 2.141787,
   2.282677, 2.439778, 2.61583, 2.814202, 3.039071, 3.295683, 3.590694, 3.932673, 4.332819, 4.806014, 5.372429, 6.060014, 6.90851, 7.976163, 9.351473, 11.1749,
   13.68177, 17.29434, 22.84208, 32.17154, 50.23385, 95.17031, 151.8879, 213.2399, 275.1504, 395.7569, 644.055, 1139.896, 2051.978, 3578.215, 6044.163, 10504.74,
   15622.35, 18208.28, 16245.36, 11290.22, 6546.705, 3871.238, 2234.221, 1244.225, 698.2921, 422.2087, 288.1379, 220.2866, 155.118, 96.59463, 50.72108, 32.40236,
   22.97211, 17.37594, 13.73689, 11.21418, 9.380625, 7.998502, 6.926073, 6.074119, 5.38396, 4.815584, 4.340865, 3.939516, 3.59657, 3.300774, 3.043517, 2.818111,
   2.61929, 2.442857, 2.285432, 2.144263, 2.017091, 1.902045, 1.797564, 1.702337, 1.615253, 1.53537, 1.461879, 1.394086, 1.33139, 1.27327, 1.21927, 1.168994,
   1.122089, 1.078249, 1.037199, 0.9986967, 0.9986967 };
   graph = new TGraph(102,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",102,-12,12);
   Graph_tausigModel12->SetMinimum(0.8982057);
   Graph_tausigModel12->SetMaximum(20029.01);
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
   
   Double_t exp_np_fx13[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625,
   0.59375, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625, 1.75,
   1.875, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t exp_np_fy13[116] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8.552466e-268, 5.397146e-225, 6.611175e-186, 1.5746e-150, 7.308526e-119,
   6.631891e-91, 1.18194e-66, 4.166464e-46, 2.938887e-29, 4.235913e-16, 1.303606e-06, 0.9631197, 2.948421, 8.026919, 19.72394, 44.91791, 97.13655, 197.9389, 363.9461, 578.2061, 782.7737,
   919.9125, 975.2411, 971.3969, 936.3877, 887.9689, 782.0815, 731.0736, 682.8772, 637.6907, 595.447, 555.9901, 519.1453, 484.7416, 452.6179, 422.6229, 394.6158,
   368.4646, 344.0465, 299.9576, 261.5186, 228.0055, 198.787, 173.3129, 151.1031, 131.7396, 114.8574, 100.1386, 87.30606, 66.36358, 50.44467, 38.34429, 29.14648,
   22.15499, 16.84058, 9.730339, 5.622104, 3.248402, 1.876898, 1.084455, 0.6265885, 0.3620373, 0.2091819, 0.1208635, 0.06983385, 0.04034938, 0.02331352, 0.01347034, 0.007783045,
   0.004496975, 0.002598312, 0.001501282, 0.0008674274, 0.0005011919, 0.0002895842, 0.0001673192, 9.667556e-05, 5.585828e-05, 3.227442e-05, 1.864788e-05, 1.077458e-05, 6.225456e-06, 3.597013e-06, 2.078323e-06, 1.200836e-06,
   6.938326e-07, 4.008904e-07, 4.008904e-07 };
   graph = new TGraph(116,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",116,-12,12);
   Graph_exp_np13->SetMinimum(1.072765);
   Graph_exp_np13->SetMaximum(1072.765);
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
   
   Double_t Fit_Total_fx14[104] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5, 0.625, 0.75,
   0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[104] = { 1.158098, 1.223079, 1.294996, 1.374822, 1.463677, 1.562858, 1.673868, 1.798448, 1.938619, 2.096727, 2.2755, 2.478113, 2.708263, 2.970265, 3.269154, 3.61082, 4.00216,
   4.451265, 4.967643, 5.562496, 6.249051, 7.042985, 7.962938, 9.031189, 10.27451, 11.72533, 13.42327, 15.41734, 17.7691, 20.55749, 23.88644, 27.89785, 32.79503,
   38.89062, 46.72153, 57.40135, 74.02994, 108.6704, 222.3847, 391.1205, 558.718, 695.2479, 911.506, 1285.502, 1951.772, 3101.979, 4971.58, 7955.293, 13210.45,
   19416.26, 23084.51, 21646.07, 16405.09, 10903.12, 7483.285, 5310.199, 3952.482, 3134.836, 2642.812, 2328.138, 2102.857, 1767.106, 1284.852, 946.7721, 703.88,
   527.4592, 398.4344, 233.4649, 142.5627, 91.36293, 61.7376, 44.00954, 32.95976, 25.74349, 20.79084, 17.22228, 14.53565, 12.43723, 10.75004, 9.363493, 8.20559,
   7.22731, 6.39377, 5.679108, 5.063457, 4.53111, 4.069367, 3.667786, 3.317674, 3.011733, 2.74379, 2.508602, 2.301701, 2.119266, 1.958024, 1.815168, 1.688284,
   1.575297, 1.474418, 1.384104, 1.303023, 1.230027, 1.164118, 1.164118 };
   graph = new TGraph(104,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",104,-12,12);
   Graph_Fit_Total14->SetMinimum(1.042288);
   Graph_Fit_Total14->SetMaximum(25392.84);
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
   
   TH1D *frame_tau_110918c0__8 = new TH1D("frame_tau_110918c0__8"," ",80,-10,10);
   frame_tau_110918c0__8->SetBinContent(1,24238.73);
   frame_tau_110918c0__8->SetMinimum(5);
   frame_tau_110918c0__8->SetMaximum(500000);
   frame_tau_110918c0__8->SetEntries(3);
   frame_tau_110918c0__8->SetDirectory(nullptr);
   frame_tau_110918c0__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_110918c0__8->SetLineColor(ci);
   frame_tau_110918c0__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_110918c0__8->GetXaxis()->SetRange(25,56);
   frame_tau_110918c0__8->GetXaxis()->SetLabelFont(42);
   frame_tau_110918c0__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_110918c0__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_110918c0__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_110918c0__8->GetXaxis()->SetTitleFont(42);
   frame_tau_110918c0__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_110918c0__8->GetYaxis()->SetLabelFont(42);
   frame_tau_110918c0__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_110918c0__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_110918c0__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_110918c0__8->GetYaxis()->SetTitleFont(42);
   frame_tau_110918c0__8->GetZaxis()->SetLabelFont(42);
   frame_tau_110918c0__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_110918c0__8->GetZaxis()->SetTitleFont(42);
   frame_tau_110918c0__8->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE preliminary, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.79,"MFT+MCH+MID");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.74,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.69,"5 GeV/c < #it{p}_{T}^{#mu#mu} < 6 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 15900#pm142");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 7716#pm110");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.153#pm0.005");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.66,0.66,0.86,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("exp_np","Non-prompt","l");

   ci = TColor::GetColor("#00cc00");
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
   leg->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 68 / 59 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.4724649,0.94,0.5275351,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad1_2DFitbis__3->Modified();
   c2DFitbis->cd();
   c2DFitbis->Modified();
   c2DFitbis->SetSelected(c2DFitbis);

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT5_6.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT5_6.png");
}
