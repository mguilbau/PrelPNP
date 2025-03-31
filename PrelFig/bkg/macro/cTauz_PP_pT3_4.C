#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT3_4()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 20:43:00 2025) by ROOT version 6.32.06
   TCanvas *cTauz_PP = new TCanvas("cTauz_PP", "cTauz",200,1103,1000,800);
   cTauz_PP->Range(0,0,1,1);
   cTauz_PP->SetFillColor(0);
   cTauz_PP->SetBorderMode(0);
   cTauz_PP->SetBorderSize(2);
   cTauz_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_Tauz
   TPad *pad1_Tauz__2 = new TPad("pad1_Tauz", "",0,0,1,1);
   pad1_Tauz__2->Draw();
   pad1_Tauz__2->cd();
   pad1_Tauz__2->Range(-6.25,0.0899462,6.25,5.211084);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_f86d120__5 = new TH1D("frame_tau_f86d120__5"," ",80,-10,10);
   frame_tau_f86d120__5->SetBinContent(1,11800.49);
   frame_tau_f86d120__5->SetMinimum(4);
   frame_tau_f86d120__5->SetMaximum(50000);
   frame_tau_f86d120__5->SetEntries(2);
   frame_tau_f86d120__5->SetDirectory(nullptr);
   frame_tau_f86d120__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f86d120__5->SetLineColor(ci);
   frame_tau_f86d120__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f86d120__5->GetXaxis()->SetRange(21,60);
   frame_tau_f86d120__5->GetXaxis()->SetLabelFont(42);
   frame_tau_f86d120__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f86d120__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f86d120__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_f86d120__5->GetXaxis()->SetTitleFont(42);
   frame_tau_f86d120__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f86d120__5->GetYaxis()->SetLabelFont(42);
   frame_tau_f86d120__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f86d120__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f86d120__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f86d120__5->GetYaxis()->SetTitleFont(42);
   frame_tau_f86d120__5->GetZaxis()->SetLabelFont(42);
   frame_tau_f86d120__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_f86d120__5->GetZaxis()->SetTitleFont(42);
   frame_tau_f86d120__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 2.312021, 1.366615, 4.513681, 4.326682, 1.211858, -0.6607646, 7.089709, 5.749855, 1.577774, 2.458791, 5.294448, 5.026719, 14.11223, 4.781935, 11.44084, 9.078264, 5.159453,
   12.61433, 13.29579, 7.896595, 17.9266, 11.51958, 21.49677, 23.64869, 23.48447, 22.55636, 48.08614, 32.29274, 34.41273, 39.73222, 75.74523, 69.81385, 73.53329,
   101.4646, 117.6902, 144.1348, 204.3858, 392.8476, 926.2404, 4951.377, 8430.711, 3069.195, 1346.122, 721.137, 379.0958, 316.6057, 188.7281, 167.0742, 96.96595,
   90.67447, 72.59699, 66.8647, 51.12708, 44.76482, 34.41463, 30.80447, 18.41002, 21.49338, 25.64535, 20.0561, 13.49906, 22.91139, 15.53936, 7.462751, 5.595264,
   6.208651, 13.4129, 5.968312, 3.549036, 2.018285, 8.722245, 3.94105, -0.1331139, 5.895323, 5.334355, 8.201818, 2.619205, 4.72618, 0.4025543, 0.5405168 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 1.934834, 1.015322, 2.558366, 2.802887, 1.452256, 0.5947469, 3.439566, 3.266185, 1.863783, 2.309494, 2.992487, 2.924907, 4.498493, 2.888767, 4.17055, 3.935032, 2.987076,
   4.413172, 4.475373, 3.77313, 5.231121, 4.299276, 5.613536, 5.97341, 6.401631, 5.56803, 8.416412, 6.822758, 7.269086, 7.437858, 10.76693, 10.46413, 10.36,
   11.94253, 13.15947, 14.7117, 17.26674, 24.69468, 38.52638, 102.1556, 125.9954, 69.53814, 46.13592, 33.87149, 24.6445, 21.90076, 17.26368, 16.06037, 12.16057,
   11.93713, 10.57021, 10.20069, 8.888545, 8.100554, 7.318981, 6.610324, 5.359886, 5.780826, 6.089171, 5.733427, 4.650653, 5.951737, 4.739364, 3.572525, 2.844533,
   3.136855, 4.368242, 3.167139, 2.600064, 1.880372, 3.555399, 2.621441, 0.7419086, 3.009684, 2.489108, 3.50225, 2.383469, 2.547678, 1.40936, 0.7193014 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 1.934834, 1.015322, 2.558366, 2.802887, 1.452256, 0.5947469, 3.439566, 3.266185, 1.863783, 2.309494, 2.992487, 2.924907, 4.498493, 2.888767, 4.17055, 3.935032, 2.987076,
   4.413172, 4.475373, 3.77313, 5.231121, 4.299276, 5.613536, 5.97341, 6.401631, 5.56803, 8.416412, 6.822758, 7.269086, 7.437858, 10.76693, 10.46413, 10.36,
   11.94253, 13.15947, 14.7117, 17.26674, 24.69468, 38.52638, 102.1556, 125.9954, 69.53814, 46.13592, 33.87149, 24.6445, 21.90076, 17.26368, 16.06037, 12.16057,
   11.93713, 10.57021, 10.20069, 8.888545, 8.100554, 7.318981, 6.610324, 5.359886, 5.780826, 6.089171, 5.733427, 4.650653, 5.951737, 4.739364, 3.572525, 2.844533,
   3.136855, 4.368242, 3.167139, 2.600064, 1.880372, 3.555399, 2.621441, 0.7419086, 3.009684, 2.489108, 3.50225, 2.383469, 2.547678, 1.40936, 0.7193014 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(9.412399);
   Graph_h_dataw_bkg3003->SetMaximum(9412.399);
   Graph_h_dataw_bkg3003->SetDirectory(nullptr);
   Graph_h_dataw_bkg3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataw_bkg3003->SetLineColor(ci);
   Graph_h_dataw_bkg3003->GetXaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3003->GetXaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3003->GetYaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetYaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3003->GetZaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataw_bkg3003);
   
   grae->Draw("p");
   
   Double_t exp_DDS_fx7[103] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.25, -0.125, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1, 1.125, 1.25,
   1.375, 1.5, 1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[103] = { 1.008126, 1.159477, 1.33355, 1.533758, 1.764022, 2.028856, 2.33345, 2.683773, 3.086691, 3.550099, 4.083078, 4.696075, 5.401101, 6.211973, 7.144582, 8.217205, 9.450862,
   10.86973, 12.50161, 14.37849, 16.53715, 19.01988, 21.87535, 25.15952, 28.93674, 33.28105, 38.27756, 44.02421, 50.6336, 58.23527, 66.97819, 77.03368, 88.59882,
   101.9002, 109.2821, 117.1986, 125.6887, 134.7938, 144.5584, 155.0305, 166.2611, 178.3053, 191.2221, 205.0745, 219.9301, 235.8451, 252.5746, 260.6542, 264.235,
   267.1389, 268.979, 269.4296, 268.4006, 266.0918, 262.8754, 259.1177, 250.9125, 234.2196, 218.4097, 203.6566, 189.9, 177.0726, 165.1116, 153.9586, 143.559,
   133.8618, 124.8197, 116.3883, 108.5265, 94.36013, 82.04294, 71.33357, 62.02213, 53.92615, 46.88696, 40.76663, 35.44521, 30.81841, 26.79557, 23.29784, 20.25669,
   17.6125, 15.31348, 13.31455, 11.57655, 10.06542, 8.751544, 7.609172, 6.615918, 5.752317, 5.001446, 4.348588, 3.780951, 3.287409, 2.858291, 2.485187, 2.160787,
   1.878731, 1.633493, 1.420267, 1.234874, 1.073681, 1.073681 };
   TGraph *graph = new TGraph(103,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",103,-12,12);
   Graph_exp_DDS7->SetMinimum(0.9073135);
   Graph_exp_DDS7->SetMaximum(296.2718);
   Graph_exp_DDS7->SetDirectory(nullptr);
   Graph_exp_DDS7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_exp_DDS7->SetLineColor(ci);
   Graph_exp_DDS7->GetXaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetXaxis()->SetTitleOffset(1);
   Graph_exp_DDS7->GetXaxis()->SetTitleFont(42);
   Graph_exp_DDS7->GetYaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetYaxis()->SetTitleFont(42);
   Graph_exp_DDS7->GetZaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetZaxis()->SetTitleOffset(1);
   Graph_exp_DDS7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_exp_DDS7);
   
   graph->Draw("l");
   
   Double_t model1_fx8[123] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.6875, -0.625, -0.5625, -0.5, -0.46875, -0.4375, -0.40625, -0.375, -0.34375, -0.3125,
   -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875,
   0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.625, 0.6875, 0.75, 0.8125,
   0.875, 0.9375, 1, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75,
   4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75,
   8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[123] = { 5.917758e-28, 3.570268e-27, 2.153994e-26, 1.299535e-25, 7.840284e-25, 4.730155e-24, 2.853771e-23, 1.721721e-22, 1.038739e-21, 6.26686e-21, 3.780886e-20, 2.281063e-19, 1.376198e-18, 8.302799e-18, 5.009198e-17, 3.022121e-16, 1.823289e-15,
   1.100016e-14, 6.636556e-14, 4.003929e-13, 2.415628e-12, 1.457383e-11, 8.7926e-11, 5.304702e-10, 3.200402e-09, 1.930849e-08, 1.164909e-07, 7.028061e-07, 4.24013e-06, 2.558131e-05, 0.0001543357, 0.0009311295, 0.005617638,
   0.03389201, 0.2044754, 1.233629, 7.442662, 18.28101, 44.90265, 70.37329, 110.2919, 172.854, 270.9022, 339.1362, 424.5454, 531.4286, 665.1168, 832.1569, 1040.454,
   1299.301, 1619.187, 2011.293, 2486.605, 3054.473, 3719.653, 4474.614, 5282.618, 6055.426, 6651.876, 6930.509, 6838.659, 6454.002, 5926.44, 5380.996, 4874.356,
   4415.365, 3998.58, 3619.499, 3275.593, 2964.504, 2683.467, 2429.562, 2200.02, 1992.359, 1804.396, 1634.208, 1480.089, 1214.097, 995.9103, 816.9345, 670.1226,
   549.6944, 450.9084, 369.8753, 248.8796, 167.4648, 112.6828, 75.82135, 34.32888, 15.54274, 7.037133, 3.186132, 1.442553, 0.6531305, 0.2957114, 0.1338863, 0.06061837,
   0.02744557, 0.01242626, 0.005626113, 0.002547279, 0.001153306, 0.000522171, 0.0002364181, 0.0001070407, 4.846374e-05, 2.194245e-05, 9.934662e-06, 4.498018e-06, 2.036523e-06, 9.220561e-07, 4.174702e-07, 1.890138e-07,
   8.55779e-08, 3.874625e-08, 1.754275e-08, 7.942658e-09, 3.596118e-09, 1.628178e-09, 7.371741e-10, 3.33763e-10, 1.511145e-10, 1.511145e-10 };
   graph = new TGraph(123,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",123,-12,12);
   Graph_model18->SetMinimum(5.325982e-28);
   Graph_model18->SetMaximum(7623.56);
   Graph_model18->SetDirectory(nullptr);
   Graph_model18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model18->SetLineColor(ci);
   Graph_model18->GetXaxis()->SetLabelFont(42);
   Graph_model18->GetXaxis()->SetTitleOffset(1);
   Graph_model18->GetXaxis()->SetTitleFont(42);
   Graph_model18->GetYaxis()->SetLabelFont(42);
   Graph_model18->GetYaxis()->SetTitleFont(42);
   Graph_model18->GetZaxis()->SetLabelFont(42);
   Graph_model18->GetZaxis()->SetTitleOffset(1);
   Graph_model18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model18);
   
   graph->Draw("l");
   
   Double_t resolution_bkg_fx9[105] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375,
   0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25,
   4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25,
   8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 1.037733e-305, 5.575892e-271, 2.512014e-238, 9.488749e-208, 3.00521e-179, 7.980307e-153, 1.77682e-128, 3.317007e-106, 5.191923e-86, 6.813796e-68,
   7.497717e-52, 6.917481e-38, 5.351135e-26, 3.470746e-16, 1.887465e-08, 0.008606248, 0.9673553, 6.550896, 15.24075, 32.91297, 66.04074, 123.6133, 218.525, 375.1346, 648.9176, 1141.972,
   1949.129, 2990.055, 3881.2, 4130.475, 3579.633, 2567.093, 1590.065, 912.355, 520.6804, 303.0588, 175.2622, 97.14609, 50.53117, 24.46527, 10.99958, 4.58993,
   0.6387692, 1.206908e-05, 1.911979e-12, 2.539634e-21, 2.828384e-32, 2.641097e-45, 2.067805e-60, 1.357418e-77, 7.471312e-97, 3.447935e-118, 1.334136e-141, 4.328331e-167, 1.177388e-194, 2.685331e-224, 5.135174e-256, 8.233631e-290,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(105,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",105,-12,12);
   Graph_resolution_bkg9->SetMinimum(4.543522);
   Graph_resolution_bkg9->SetMaximum(4543.522);
   Graph_resolution_bkg9->SetDirectory(nullptr);
   Graph_resolution_bkg9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_resolution_bkg9->SetLineColor(ci);
   Graph_resolution_bkg9->GetXaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetXaxis()->SetTitleOffset(1);
   Graph_resolution_bkg9->GetXaxis()->SetTitleFont(42);
   Graph_resolution_bkg9->GetYaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetYaxis()->SetTitleFont(42);
   Graph_resolution_bkg9->GetZaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetZaxis()->SetTitleOffset(1);
   Graph_resolution_bkg9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_resolution_bkg9);
   
   graph->Draw("l");
   
   Double_t model2_fx10[117] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25,
   1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t model2_fy10[117] = { 1.008126, 1.159477, 1.33355, 1.533758, 1.764022, 2.028856, 2.33345, 2.683773, 3.086691, 3.550099, 4.083078, 4.696075, 5.401101, 6.211973, 7.144582, 8.217205, 9.450862,
   10.86973, 12.50161, 14.37849, 16.53715, 19.01988, 21.87535, 25.15952, 28.93674, 33.28105, 38.27756, 44.02421, 50.6336, 58.2353, 66.97834, 77.03461, 88.60444,
   101.9341, 117.4031, 136.0274, 162.4731, 223.208, 301.514, 370.8817, 475.9853, 637.0239, 747.8793, 886.0143, 1058.579, 1274.76, 1546.309, 1887.945, 2317.315,
   2854.383, 3521.373, 4347.362, 5380.235, 6685.244, 8268.79, 9909.07, 11080.69, 11238.56, 10302.04, 8759.625, 7233.937, 6045.829, 5191.125, 4552.552, 4041.465,
   3615.24, 3253.369, 2942.151, 2670.729, 2430.791, 2216.399, 2023.444, 1691.059, 1417.759, 1192.569, 1006.835, 853.4968, 726.767, 534.9869, 402.8383, 311.0237,
   200.641, 142.8554, 109.9029, 89.08008, 74.5197, 63.46468, 54.57928, 47.18267, 40.90052, 35.50583, 30.84586, 26.80799, 23.30347, 20.25923, 17.61366, 15.314,
   13.31479, 11.57666, 10.06547, 8.751566, 7.609182, 6.615923, 5.752319, 5.001447, 4.348589, 3.780951, 3.287409, 2.858291, 2.485187, 2.160787, 1.878731, 1.633493,
   1.420267, 1.234874, 1.073681, 1.073681 };
   graph = new TGraph(117,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",117,-12,12);
   Graph_model210->SetMinimum(0.9073135);
   Graph_model210->SetMaximum(12362.32);
   Graph_model210->SetDirectory(nullptr);
   Graph_model210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model210->SetLineColor(ci);
   Graph_model210->GetXaxis()->SetLabelFont(42);
   Graph_model210->GetXaxis()->SetTitleOffset(1);
   Graph_model210->GetXaxis()->SetTitleFont(42);
   Graph_model210->GetYaxis()->SetLabelFont(42);
   Graph_model210->GetYaxis()->SetTitleFont(42);
   Graph_model210->GetZaxis()->SetLabelFont(42);
   Graph_model210->GetZaxis()->SetTitleOffset(1);
   Graph_model210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model210);
   
   graph->Draw("l");
   
   TH1D *frame_tau_f86d120__6 = new TH1D("frame_tau_f86d120__6"," ",80,-10,10);
   frame_tau_f86d120__6->SetBinContent(1,11800.49);
   frame_tau_f86d120__6->SetMinimum(4);
   frame_tau_f86d120__6->SetMaximum(50000);
   frame_tau_f86d120__6->SetEntries(2);
   frame_tau_f86d120__6->SetDirectory(nullptr);
   frame_tau_f86d120__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f86d120__6->SetLineColor(ci);
   frame_tau_f86d120__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f86d120__6->GetXaxis()->SetRange(21,60);
   frame_tau_f86d120__6->GetXaxis()->SetLabelFont(42);
   frame_tau_f86d120__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f86d120__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f86d120__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_f86d120__6->GetXaxis()->SetTitleFont(42);
   frame_tau_f86d120__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f86d120__6->GetYaxis()->SetLabelFont(42);
   frame_tau_f86d120__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f86d120__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f86d120__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f86d120__6->GetYaxis()->SetTitleFont(42);
   frame_tau_f86d120__6->GetZaxis()->SetLabelFont(42);
   frame_tau_f86d120__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_f86d120__6->GetZaxis()->SetTitleFont(42);
   frame_tau_f86d120__6->Draw("AXISSAME");
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
   
   TLegend *leg = new TLegend(0.68,0.69,0.86,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","exp_{DSS} + exp_{DF}","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("exp_DDS","exp_{DDS}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resolution_bkg","delta","l");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Total fit","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 121 / 76 ");
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
   pad1_Tauz__2->Modified();
   cTauz_PP->cd();
   cTauz_PP->Modified();
   cTauz_PP->SetSelected(cTauz_PP);
}
