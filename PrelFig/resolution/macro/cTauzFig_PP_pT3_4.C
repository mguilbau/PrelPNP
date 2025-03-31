#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT3_4()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 20:42:47 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",695,1104,1000,800);
   cTauzFig_PP->Range(0,0,1,1);
   cTauzFig_PP->SetFillColor(0);
   cTauzFig_PP->SetBorderMode(0);
   cTauzFig_PP->SetBorderSize(2);
   cTauzFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_TauzPP
   TPad *pad1_TauzPP__1 = new TPad("pad1_TauzPP", "",0,0,1,1);
   pad1_TauzPP__1->Draw();
   pad1_TauzPP__1->cd();
   pad1_TauzPP__1->Range(-6.25,0.07396996,6.25,6.32397);
   pad1_TauzPP__1->SetFillColor(0);
   pad1_TauzPP__1->SetBorderMode(0);
   pad1_TauzPP__1->SetBorderSize(2);
   pad1_TauzPP__1->SetLogy();
   pad1_TauzPP__1->SetFrameBorderMode(0);
   pad1_TauzPP__1->SetFrameBorderMode(0);
   
   TH1D *frame_tau_101cf040__3 = new TH1D("frame_tau_101cf040__3"," ",80,-10,10);
   frame_tau_101cf040__3->SetBinContent(1,41914.53);
   frame_tau_101cf040__3->SetMinimum(5);
   frame_tau_101cf040__3->SetMaximum(500000);
   frame_tau_101cf040__3->SetEntries(3);
   frame_tau_101cf040__3->SetDirectory(nullptr);
   frame_tau_101cf040__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_101cf040__3->SetLineColor(ci);
   frame_tau_101cf040__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_101cf040__3->GetXaxis()->SetRange(21,60);
   frame_tau_101cf040__3->GetXaxis()->SetLabelFont(42);
   frame_tau_101cf040__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_101cf040__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_101cf040__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_101cf040__3->GetXaxis()->SetTitleFont(42);
   frame_tau_101cf040__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_101cf040__3->GetYaxis()->SetLabelFont(42);
   frame_tau_101cf040__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_101cf040__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_101cf040__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_101cf040__3->GetYaxis()->SetTitleFont(42);
   frame_tau_101cf040__3->GetZaxis()->SetLabelFont(42);
   frame_tau_101cf040__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_101cf040__3->GetZaxis()->SetTitleFont(42);
   frame_tau_101cf040__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 3.687942, 3.633354, 2.486275, 0.6732866, 3.788111, 9.660707, 9.910184, 4.250082, 6.422176, 9.541133, 7.70547, 10.97318, 1.887665, 5.218003, 11.55902, 1.921667, 9.840452,
   13.3855, 8.704075, 19.10323, 3.07327, 20.48022, 13.50301, 10.3511, 20.51525, 12.44342, 16.91345, 20.70693, 19.58693, 22.26739, 16.25421, 48.18539, 34.46603,
   47.53452, 63.30867, 91.8637, 110.6122, 179.1486, 826.749, 15487.61, 18038.09, 1931.77, 915.8611, 533.8544, 354.8993, 187.391, 117.27, 87.92426, 57.03309,
   39.32471, 35.40235, 16.13477, 23.87245, 16.23478, 14.58506, 11.19526, 10.58979, 16.50639, 7.354443, 10.9437, 11.50079, 7.088418, 11.46047, 10.53714, 8.404647,
   5.791273, 2.586999, 12.03157, 3.45092, 7.981652, 1.277691, 6.058887, 6.133077, 1.104634, 2.665594, -0.2018689, 5.380745, 0.2737879, 5.597408, 1.459471 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 2.26263, 1.815931, 2.125522, 2.050075, 2.164552, 3.267282, 3.827672, 3.027904, 2.884105, 3.523643, 3.371348, 3.808084, 2.830539, 2.963282, 4.184694, 2.885815, 3.688305,
   4.499695, 3.929031, 5.044113, 3.537146, 5.238737, 4.849544, 4.731186, 6.165363, 4.570567, 6.297897, 5.913061, 6.165542, 6.152805, 7.512397, 9.373887, 8.26212,
   9.417774, 10.8991, 12.81263, 14.2957, 19.903, 37.2128, 144.8166, 159.6313, 60.81233, 41.20998, 30.98379, 24.1486, 18.71976, 15.05248, 13.37109, 10.38975,
   9.547022, 8.633364, 7.302368, 7.193871, 6.090083, 5.808444, 4.907881, 4.572549, 5.332072, 4.334422, 4.874408, 4.430612, 4.427223, 4.287505, 3.979611, 3.301625,
   3.069607, 2.873274, 4.011732, 2.581127, 3.082066, 2.279551, 2.998296, 2.610858, 2.065803, 1.878008, 1.965229, 2.905589, 1.427689, 2.679761, 1.198475 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 2.26263, 1.815931, 2.125522, 2.050075, 2.164552, 3.267282, 3.827672, 3.027904, 2.884105, 3.523643, 3.371348, 3.808084, 2.830539, 2.963282, 4.184694, 2.885815, 3.688305,
   4.499695, 3.929031, 5.044113, 3.537146, 5.238737, 4.849544, 4.731186, 6.165363, 4.570567, 6.297897, 5.913061, 6.165542, 6.152805, 7.512397, 9.373887, 8.26212,
   9.417774, 10.8991, 12.81263, 14.2957, 19.903, 37.2128, 144.8166, 159.6313, 60.81233, 41.20998, 30.98379, 24.1486, 18.71976, 15.05248, 13.37109, 10.38975,
   9.547022, 8.633364, 7.302368, 7.193871, 6.090083, 5.808444, 4.907881, 4.572549, 5.332072, 4.334422, 4.874408, 4.430612, 4.427223, 4.287505, 3.979611, 3.301625,
   3.069607, 2.873274, 4.011732, 2.581127, 3.082066, 2.279551, 2.998296, 2.610858, 2.065803, 1.878008, 1.965229, 2.905589, 1.427689, 2.679761, 1.198475 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(20.0175);
   Graph_h_data_sig_cut3002->SetMaximum(20017.5);
   Graph_h_data_sig_cut3002->SetDirectory(nullptr);
   Graph_h_data_sig_cut3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data_sig_cut3002->SetLineColor(ci);
   Graph_h_data_sig_cut3002->GetXaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetXaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3002->GetXaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3002->GetYaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetYaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3002->GetZaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetZaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data_sig_cut3002);
   
   grae->Draw("p");
   
   Double_t gauss1_fx4[110] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.4375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[110] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 1.151487e-296, 2.107927e-262, 3.235421e-230, 4.163754e-200, 4.492813e-172, 4.06472e-146, 3.083344e-122, 1.961067e-100,
   1.045783e-80, 4.675952e-63, 1.752982e-47, 5.510156e-34, 1.45221e-22, 3.20903e-13, 5.94562e-06, 0.9236334, 8.686981, 60.59761, 143.0805, 313.5159, 637.5191, 1203.043, 2106.801, 3423.892,
   5163.82, 7227.307, 9387.203, 11314.89, 12656.65, 13138.37, 12656.65, 11314.89, 9387.203, 7227.307, 5163.82, 3423.892, 2106.801, 1203.043, 637.5191, 313.5159,
   143.0805, 60.59761, 8.686981, 0.9236334, 5.94562e-06, 3.20903e-13, 1.45221e-22, 5.510156e-34, 1.752982e-47, 4.675952e-63, 1.045783e-80, 1.961067e-100, 3.083344e-122, 4.06472e-146, 4.492813e-172, 4.163754e-200,
   3.235421e-230, 2.107927e-262, 1.151487e-296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(110,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",110,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(14.45221);
   Graph_gauss14->SetMaximum(14452.21);
   Graph_gauss14->SetDirectory(nullptr);
   Graph_gauss14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gauss14->SetLineColor(ci);
   Graph_gauss14->GetXaxis()->SetLabelFont(42);
   Graph_gauss14->GetXaxis()->SetTitleOffset(1);
   Graph_gauss14->GetXaxis()->SetTitleFont(42);
   Graph_gauss14->GetYaxis()->SetLabelFont(42);
   Graph_gauss14->GetYaxis()->SetTitleFont(42);
   Graph_gauss14->GetZaxis()->SetLabelFont(42);
   Graph_gauss14->GetZaxis()->SetTitleOffset(1);
   Graph_gauss14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gauss14);
   
   graph->Draw("l");
   
   Double_t DCB_fx5[104] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[104] = { 0, 3.875287, 3.875287, 4.017143, 4.168102, 4.329014, 4.500833, 4.684633, 4.881633, 5.093215, 5.320952, 5.566648, 5.832372, 6.120514, 6.433847, 6.775602, 7.149568,
   7.560214, 8.012844, 8.513798, 9.070709, 9.692847, 10.39157, 11.18092, 12.07848, 13.10649, 14.29347, 15.67657, 17.30499, 19.24514, 21.58868, 24.46539, 28.06463,
   32.67278, 38.74217, 47.02675, 58.87251, 76.90987, 106.9676, 164.6279, 307.138, 486.084, 656.9035, 963.6933, 1224.224, 1633.225, 2346.888, 3826.712, 7928.623,
   15230.74, 22533.84, 25676.74, 22533.84, 15230.74, 7928.623, 3826.712, 2346.888, 1633.225, 1224.224, 963.6933, 656.9035, 486.084, 307.138, 164.6279, 106.9676,
   76.90987, 58.87251, 47.02675, 38.74217, 32.67278, 28.06463, 24.46539, 21.58868, 19.24514, 17.30499, 15.67657, 14.29347, 13.10649, 12.07848, 11.18092, 10.39157,
   9.692847, 9.070709, 8.513798, 8.012844, 7.560214, 7.149568, 6.775602, 6.433847, 6.120514, 5.832372, 5.566648, 5.320952, 5.093215, 4.881633, 4.684633, 4.500833,
   4.329014, 4.168102, 4.017143, 3.875287, 3.875287, 3.875287, 0 };
   graph = new TGraph(104,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",104,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(28.24441);
   Graph_DCB5->SetMaximum(28244.41);
   Graph_DCB5->SetDirectory(nullptr);
   Graph_DCB5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_DCB5->SetLineColor(ci);
   Graph_DCB5->GetXaxis()->SetLabelFont(42);
   Graph_DCB5->GetXaxis()->SetTitleOffset(1);
   Graph_DCB5->GetXaxis()->SetTitleFont(42);
   Graph_DCB5->GetYaxis()->SetLabelFont(42);
   Graph_DCB5->GetYaxis()->SetTitleFont(42);
   Graph_DCB5->GetZaxis()->SetLabelFont(42);
   Graph_DCB5->GetZaxis()->SetTitleOffset(1);
   Graph_DCB5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_DCB5);
   
   graph->Draw("l");
   
   Double_t model_fx6[110] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[110] = { 0, 3.875287, 3.875287, 4.017143, 4.168102, 4.329014, 4.500833, 4.684633, 4.881633, 5.093215, 5.320952, 5.566648, 5.832372, 6.120514, 6.433847, 6.775602, 7.149568,
   7.560214, 8.012844, 8.513798, 9.070709, 9.692847, 10.39157, 11.18092, 12.07848, 13.10649, 14.29347, 15.67657, 17.30499, 19.24514, 21.58868, 24.46539, 28.06463,
   32.67278, 38.74217, 47.02675, 58.87251, 76.90987, 106.9676, 164.6279, 308.068, 547.2117, 704.9913, 973.5918, 1429.92, 2181.153, 3358.929, 5108.374, 7601.851,
   11214.56, 17597.76, 27027.18, 35957.67, 39918.6, 36607.83, 28186.34, 19066.15, 12820.92, 9236.898, 6713.351, 4903.932, 3651.078, 2817.982, 2278.206, 1927.778,
   1691.566, 1388.403, 1181.937, 883.9996, 673.2298, 402.9751, 249.1869, 159.1382, 105.3816, 72.70483, 52.43913, 39.5687, 31.16079, 25.48542, 21.51305, 18.62492,
   16.44477, 14.74056, 13.3667, 12.22993, 11.26906, 10.44287, 9.722703, 9.088085, 8.523911, 8.01873, 7.56364, 7.151562, 6.776762, 6.434522, 6.120907, 5.8326,
   5.566781, 5.32103, 5.09326, 4.88166, 4.684649, 4.500841, 4.329019, 4.168105, 4.017145, 3.875288, 3.875288, 3.875288, 0 };
   graph = new TGraph(110,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",110,-12.3003,12.3003);
   Graph_model6->SetMinimum(43.91046);
   Graph_model6->SetMaximum(43910.46);
   Graph_model6->SetDirectory(nullptr);
   Graph_model6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model6->SetLineColor(ci);
   Graph_model6->GetXaxis()->SetLabelFont(42);
   Graph_model6->GetXaxis()->SetTitleOffset(1);
   Graph_model6->GetXaxis()->SetTitleFont(42);
   Graph_model6->GetYaxis()->SetLabelFont(42);
   Graph_model6->GetYaxis()->SetTitleFont(42);
   Graph_model6->GetZaxis()->SetLabelFont(42);
   Graph_model6->GetZaxis()->SetTitleOffset(1);
   Graph_model6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model6);
   
   graph->Draw("l");
   
   TH1D *frame_tau_101cf040__4 = new TH1D("frame_tau_101cf040__4"," ",80,-10,10);
   frame_tau_101cf040__4->SetBinContent(1,41914.53);
   frame_tau_101cf040__4->SetMinimum(5);
   frame_tau_101cf040__4->SetMaximum(500000);
   frame_tau_101cf040__4->SetEntries(3);
   frame_tau_101cf040__4->SetDirectory(nullptr);
   frame_tau_101cf040__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_101cf040__4->SetLineColor(ci);
   frame_tau_101cf040__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_101cf040__4->GetXaxis()->SetRange(21,60);
   frame_tau_101cf040__4->GetXaxis()->SetLabelFont(42);
   frame_tau_101cf040__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_101cf040__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_101cf040__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_101cf040__4->GetXaxis()->SetTitleFont(42);
   frame_tau_101cf040__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_101cf040__4->GetYaxis()->SetLabelFont(42);
   frame_tau_101cf040__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_101cf040__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_101cf040__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_101cf040__4->GetYaxis()->SetTitleFont(42);
   frame_tau_101cf040__4->GetZaxis()->SetLabelFont(42);
   frame_tau_101cf040__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_101cf040__4->GetZaxis()->SetTitleFont(42);
   frame_tau_101cf040__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"3 GeV/c < #it{p}_{T}^{#mu#mu} < 4 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.72,0.71,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gauss1","Gauss","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DCB","DCB","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("model","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 117 / 75 ");
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
   pad1_TauzPP__1->Modified();
   cTauzFig_PP->cd();
   cTauzFig_PP->Modified();
   cTauzFig_PP->SetSelected(cTauzFig_PP);
}
