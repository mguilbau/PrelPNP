#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT15_30()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Tue Apr  1 11:20:08 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",80,103,1000,800);
   c2DFitbis->Range(0,0,1,1);
   c2DFitbis->SetFillColor(0);
   c2DFitbis->SetBorderMode(0);
   c2DFitbis->SetBorderSize(2);
   c2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__3 = new TPad("pad1_2DFitbis", "",0,0,1,1);
   pad1_2DFitbis__3->Draw();
   pad1_2DFitbis__3->cd();
   pad1_2DFitbis__3->Range(-5,0.19897,5,5.19897);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_ec8b6a0__7 = new TH1D("frame_tau_ec8b6a0__7"," ",80,-10,10);
   frame_tau_ec8b6a0__7->SetBinContent(1,2530.845);
   frame_tau_ec8b6a0__7->SetMinimum(5);
   frame_tau_ec8b6a0__7->SetMaximum(50000);
   frame_tau_ec8b6a0__7->SetEntries(3);
   frame_tau_ec8b6a0__7->SetDirectory(nullptr);
   frame_tau_ec8b6a0__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_ec8b6a0__7->SetLineColor(ci);
   frame_tau_ec8b6a0__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_ec8b6a0__7->GetXaxis()->SetRange(25,56);
   frame_tau_ec8b6a0__7->GetXaxis()->SetLabelFont(42);
   frame_tau_ec8b6a0__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_ec8b6a0__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_ec8b6a0__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_ec8b6a0__7->GetXaxis()->SetTitleFont(42);
   frame_tau_ec8b6a0__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_ec8b6a0__7->GetYaxis()->SetLabelFont(42);
   frame_tau_ec8b6a0__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_ec8b6a0__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_ec8b6a0__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_ec8b6a0__7->GetYaxis()->SetTitleFont(42);
   frame_tau_ec8b6a0__7->GetZaxis()->SetLabelFont(42);
   frame_tau_ec8b6a0__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_ec8b6a0__7->GetZaxis()->SetTitleFont(42);
   frame_tau_ec8b6a0__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
   3, 2, 8, 9, 6, 21, 516, 951, 263, 152, 83, 41, 20, 11, 10, 4,
   5, 3, 2, 3, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.8272462,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.159691,
   1.632705, 1.291815, 2.768386, 2.943461, 2.379931, 4.545807, 22.22114, 30.34234, 15.72498, 11.83896, 9.092044, 6.376898, 4.434448, 3.265579, 3.108694, 1.914339,
   2.159691, 1.632705, 1.291815, 1.632705, 0, 0, 0, 0.8272462, 0, 0, 0, 0, 0.8272462, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527,
   1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 3.382473,
   2.918186, 2.63786, 3.945142, 4.110204, 3.583642, 5.655182, 23.22114, 31.34234, 16.72498, 12.83896, 10.14705, 7.455185, 5.546519, 4.416521, 4.26695, 3.162753,
   3.382473, 2.918186, 2.63786, 2.918186, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874,
   1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(1.080577);
   Graph_h_data3004->SetMaximum(1080.577);
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
   
   Double_t model2_fx11[112] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy11[112] = { 0.0003017134, 0.000389177, 0.0005019953, 0.0006475184, 0.0008352272, 0.001077351, 0.001389664, 0.001792512, 0.002312143, 0.002982409, 0.003846978, 0.004962177, 0.00640066, 0.008256144, 0.01064951, 0.0137367, 0.01771882,
   0.02285532, 0.02948084, 0.03802702, 0.04905066, 0.06326993, 0.08161121, 0.1052694, 0.135786, 0.1751489, 0.2259227, 0.2914153, 0.3758936, 0.4848613, 0.6254179, 0.8067229, 1.040604,
   1.342407, 1.732539, 2.24157, 2.938221, 4.11335, 5.26487, 7.538073, 9.557612, 12.65662, 17.50725, 20.94708, 25.4405, 31.58674, 40.46973, 53.81279, 75.58716,
   124.3018, 242.7519, 399.7688, 437.6792, 351.4236, 276.7301, 241.3464, 219.3593, 201.2785, 185.6297, 171.7444, 159.1433, 147.5569, 136.8459, 117.7382, 101.3347,
   87.24975, 75.15339, 64.76295, 55.83599, 48.16469, 41.5708, 35.90151, 26.83116, 20.11356, 15.13076, 11.42805, 8.670709, 5.071198, 3.040742, 1.876739, 1.195628,
   0.7869941, 0.5346236, 0.3737339, 0.2677596, 0.1957228, 0.1453365, 0.1092206, 0.08281119, 0.06319491, 0.04845006, 0.03726872, 0.02873503, 0.02219191, 0.01715853, 0.01327752, 0.01028014,
   0.007962564, 0.006169162, 0.004780603, 0.003705077, 0.002871786, 0.002226051, 0.001725591, 0.001337686, 0.001037003, 0.0008039188, 0.0006232311, 0.0004831581, 0.0003745689, 0.000290386, 0.000290386 };
   TGraph *graph = new TGraph(112,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",112,-12,12);
   Graph_model211->SetMinimum(0.0002613474);
   Graph_model211->SetMaximum(481.4471);
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
   Double_t tausigModel_fy12[98] = { 0.06603414, 0.06828326, 0.07067076, 0.07320916, 0.07591249, 0.07879654, 0.08187913, 0.08518041, 0.08872331, 0.09253396, 0.09664231, 0.1010828, 0.1058953, 0.1111261, 0.1168293, 0.1230684, 0.1299186,
   0.1374692, 0.1458278, 0.1551238, 0.1655156, 0.177198, 0.1904134, 0.2054671, 0.2227485, 0.2427619, 0.2661708, 0.2938649, 0.3270635, 0.3674796, 0.4175918, 0.4811139, 0.5638519,
   0.6753731, 0.8325331, 1.067772, 1.45166, 2.168495, 3.873793, 5.93697, 12.11957, 17.5267, 29.72272, 56.5274, 110.1117, 212.2902, 524.184, 1283.838, 1805.879,
   1321.982, 550.5038, 219.0753, 113.4696, 58.28484, 30.55388, 17.89293, 12.28729, 5.971454, 3.890008, 2.174328, 1.454537, 1.069448, 0.8336141, 0.676121, 0.5643963,
   0.4815256, 0.4179127, 0.3677358, 0.3272722, 0.2940378, 0.266316, 0.2428855, 0.2228547, 0.2055592, 0.1904939, 0.1772689, 0.1655785, 0.15518, 0.1458781, 0.1375147, 0.1299597,
   0.1231058, 0.1168634, 0.1111574, 0.105924, 0.1011093, 0.09666673, 0.09255658, 0.08874432, 0.08519997, 0.08189737, 0.07881359, 0.07592846, 0.07322414, 0.07068484, 0.06829651, 0.06604663,
   0.06604663 };
   graph = new TGraph(98,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",100,-12,12);
   Graph_tausigModel12->SetMinimum(0.05943073);
   Graph_tausigModel12->SetMaximum(1986.461);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.771481e-251, 1.236745e-203, 5.466176e-161,
   2.400582e-123, 1.052464e-90, 4.639469e-63, 2.080816e-40, 9.702274e-23, 4.924144e-10, 0.03087314, 0.4892359, 1.518111, 4.054549, 10.08081, 27.46835, 77.01444, 166.7704, 250.6992, 284.8203,
   282.083, 267.2497, 231.9178, 214.7307, 198.5756, 183.5609, 169.6623, 156.8119, 144.9342, 133.956, 123.8094, 114.4313, 105.7636, 97.75242, 90.34806, 83.50455,
   77.17942, 71.33338, 65.93016, 56.32053, 48.11156, 41.09908, 35.1087, 29.99144, 25.62005, 21.88581, 18.69585, 15.97085, 11.65449, 8.50469, 6.206172, 4.528862,
   2.41168, 1.284252, 0.6838814, 0.364176, 0.1939286, 0.1032696, 0.05499245, 0.02928422, 0.01559424, 0.008304143, 0.004422068, 0.00235481, 0.001253968, 0.0006677549, 0.0003555885, 0.0001893556,
   0.0001008344, 5.369569e-05, 2.859368e-05, 1.522652e-05, 8.108325e-06, 4.317792e-06, 2.299282e-06, 1.224399e-06, 6.520087e-07, 3.472034e-07, 1.848905e-07, 9.845667e-08, 5.24295e-08, 2.791941e-08, 1.486746e-08, 7.917124e-09,
   4.215975e-09, 4.215975e-09 };
   graph = new TGraph(115,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",115,-12,12);
   Graph_exp_np13->SetMinimum(0.3133023);
   Graph_exp_np13->SetMaximum(313.3023);
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
   Double_t Fit_Total_fy14[103] = { 0.06633585, 0.06867244, 0.07117276, 0.07385668, 0.07674772, 0.07987389, 0.08326879, 0.08697293, 0.09103545, 0.09551637, 0.1004893, 0.106045, 0.112296, 0.1193823, 0.1274788, 0.1368051, 0.1476374,
   0.1603246, 0.1753086, 0.1931508, 0.2145662, 0.2404679, 0.2720246, 0.3107365, 0.3585345, 0.4179108, 0.4920935, 0.5852802, 0.7029571, 0.8523409, 1.04301, 1.287837, 1.604456,
   2.01778, 2.565072, 3.309342, 4.389881, 6.281844, 11.41187, 18.5936, 25.39667, 37.59094, 49.24714, 70.68168, 111.8583, 189.7534, 346.6728, 794.4043, 1760.621,
   2410.329, 1924.104, 1112.054, 742.5047, 600.0787, 509.2967, 448.1013, 404.368, 370.0062, 314.4561, 268.6438, 229.8806, 196.9033, 144.7594, 106.6596, 78.75199,
   58.27714, 32.17106, 18.00901, 10.27618, 6.016818, 3.642516, 2.297422, 1.518906, 1.055824, 0.7710412, 0.5890681, 0.4678925, 0.3837855, 0.3230839, 0.2777272, 0.2428187,
   0.2152826, 0.1931164, 0.1749687, 0.1598959, 0.147219, 0.136437, 0.1271722, 0.1191352, 0.1121013, 0.1058942, 0.1003741, 0.09542959, 0.09097102, 0.08692591, 0.08323524, 0.07985069,
   0.07673243, 0.0738474, 0.07116801, 0.06867109, 0.06633702, 0.06633702 };
   graph = new TGraph(103,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",103,-12,12);
   Graph_Fit_Total14->SetMinimum(0.05970227);
   Graph_Fit_Total14->SetMaximum(2651.355);
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
   
   TH1D *frame_tau_ec8b6a0__8 = new TH1D("frame_tau_ec8b6a0__8"," ",80,-10,10);
   frame_tau_ec8b6a0__8->SetBinContent(1,2530.845);
   frame_tau_ec8b6a0__8->SetMinimum(5);
   frame_tau_ec8b6a0__8->SetMaximum(50000);
   frame_tau_ec8b6a0__8->SetEntries(3);
   frame_tau_ec8b6a0__8->SetDirectory(nullptr);
   frame_tau_ec8b6a0__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_ec8b6a0__8->SetLineColor(ci);
   frame_tau_ec8b6a0__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_ec8b6a0__8->GetXaxis()->SetRange(25,56);
   frame_tau_ec8b6a0__8->GetXaxis()->SetLabelFont(42);
   frame_tau_ec8b6a0__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_ec8b6a0__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_ec8b6a0__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_ec8b6a0__8->GetXaxis()->SetTitleFont(42);
   frame_tau_ec8b6a0__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_ec8b6a0__8->GetYaxis()->SetLabelFont(42);
   frame_tau_ec8b6a0__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_ec8b6a0__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_ec8b6a0__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_ec8b6a0__8->GetYaxis()->SetTitleFont(42);
   frame_tau_ec8b6a0__8->GetZaxis()->SetLabelFont(42);
   frame_tau_ec8b6a0__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_ec8b6a0__8->GetZaxis()->SetTitleFont(42);
   frame_tau_ec8b6a0__8->Draw("AXISSAME");
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
      //tex = new TLatex(0.15,0.54,"N_{J/#psi} = 1421#pm47");
      tex = new TLatex(0.15,0.69,"15 < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      //tex = new TLatex(0.15,0.49,"N_{bkg} = 699#pm38");
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 1421#pm47");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();

      tex = new TLatex(0.15,0.49,"N_{bkg} = 699#pm38");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();

      tex = new TLatex(0.15,0.44,"f_{B} = 0.412#pm0.020");
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
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 22 / 19 ");
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

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT15_30.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT15_30.png");
}