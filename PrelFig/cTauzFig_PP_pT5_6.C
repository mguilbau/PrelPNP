#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT5_6()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 12:17:53 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",200,1103,1000,800);
   cTauzFig_PP->Range(0,0,1,1);
   cTauzFig_PP->SetFillColor(0);
   cTauzFig_PP->SetBorderMode(0);
   cTauzFig_PP->SetBorderSize(2);
   cTauzFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_TauzPP
   TPad *pad1_TauzPP__2 = new TPad("pad1_TauzPP", "",0,0.23,1,1);
   pad1_TauzPP__2->Draw();
   pad1_TauzPP__2->cd();
   pad1_TauzPP__2->Range(-12.5,0.1760913,12.5,5.674267);
   pad1_TauzPP__2->SetFillColor(0);
   pad1_TauzPP__2->SetBorderMode(0);
   pad1_TauzPP__2->SetBorderSize(2);
   pad1_TauzPP__2->SetLogy();
   pad1_TauzPP__2->SetBottomMargin(0);
   pad1_TauzPP__2->SetFrameBorderMode(0);
   pad1_TauzPP__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_101be0a0__5 = new TH1D("frame_tau_101be0a0__5"," ",80,-10,10);
   frame_tau_101be0a0__5->SetBinContent(1,20047.64);
   frame_tau_101be0a0__5->SetMinimum(1.5);
   frame_tau_101be0a0__5->SetMaximum(133183.3);
   frame_tau_101be0a0__5->SetEntries(4);
   frame_tau_101be0a0__5->SetDirectory(nullptr);
   frame_tau_101be0a0__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_101be0a0__5->SetLineColor(ci);
   frame_tau_101be0a0__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_101be0a0__5->GetXaxis()->SetLabelFont(42);
   frame_tau_101be0a0__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_101be0a0__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_101be0a0__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_101be0a0__5->GetXaxis()->SetTitleFont(42);
   frame_tau_101be0a0__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_101be0a0__5->GetYaxis()->SetLabelFont(42);
   frame_tau_101be0a0__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_101be0a0__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_101be0a0__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_101be0a0__5->GetYaxis()->SetTitleFont(42);
   frame_tau_101be0a0__5->GetZaxis()->SetLabelFont(42);
   frame_tau_101be0a0__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_101be0a0__5->GetZaxis()->SetTitleFont(42);
   frame_tau_101be0a0__5->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3003[80] = { 0.968285, 1.074232, 1.147348, 1.152963, 1.150918, 0, 0.5536627, 1.298652, 1.132157, 0, 0.8471067, 0, 0, 3.415709, 1.49681, 1.700462, 3.545953,
   3.281425, 7.412922, 3.06362, 6.266747, 0.518979, 2.135711, 8.478722, 4.731045, 8.45472, 5.217667, 2.98945, 5.523623, 12.73764, 8.606405, 10.26721, 11.5797,
   17.84379, 12.67764, 23.52592, 33.00684, 56.27191, 189.3637, 6279.761, 7399.162, 762.8749, 387.3289, 222.4645, 106.5489, 90.97939, 42.36242, 42.14031, 16.34949,
   9.526705, 12.93332, 8.450766, 9.830145, 9.230165, 3.263593, 2.755157, 4.407847, 0.4449847, 2.683985, 9.16552, 5.08008, 2.630666, 5.258012, -0.6101603, 2.202631,
   -0.7261347, 2.411592, -0.5156738, -0.3557063, 0.3765216, 0, 3.164293, 0, 1.155297, 2.26659, 0.2017064, 0.596558, 0, 1.097317, 0 };
   Double_t h_data_sig_cut_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3003[80] = { 0.968285, 1.074232, 1.163156, 1.152963, 1.150918, 0, 1.248098, 1.428593, 1.132157, 0, 0.8471067, 0, 0, 2.319376, 1.568601, 1.546224, 2.025706,
   2.32616, 3.066854, 2.030167, 2.827944, 1.917794, 2.121437, 3.112324, 2.402949, 3.380998, 2.824591, 2.627695, 2.659506, 4.513854, 3.663983, 4.099734, 4.306911,
   5.055907, 4.725482, 6.773051, 7.296099, 9.45469, 16.89674, 86.46016, 95.90766, 35.44713, 24.9633, 18.66212, 13.25002, 11.38776, 8.628849, 7.994799, 5.776977,
   4.779352, 4.759573, 3.497222, 3.659529, 3.400254, 3.428219, 2.526217, 2.684323, 1.581116, 2.216145, 3.122971, 2.290085, 2.015834, 3.049206, 1.424901, 1.557495,
   0.5693746, 2.101519, 0.5156738, 0.3557063, 1.095362, 0, 1.93493, 0, 1.155297, 1.603009, 0.2017064, 1.182938, 0, 1.097316, 0 };
   Double_t h_data_sig_cut_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3003[80] = { 0.968285, 1.074232, 1.163156, 1.152963, 1.150918, 0, 1.248098, 1.428593, 1.132157, 0, 0.8471067, 0, 0, 2.319376, 1.568601, 1.546224, 2.025706,
   2.32616, 3.066854, 2.030167, 2.827944, 1.917794, 2.121437, 3.112324, 2.402949, 3.380998, 2.824591, 2.627695, 2.659506, 4.513854, 3.663983, 4.099734, 4.306911,
   5.055907, 4.725482, 6.773051, 7.296099, 9.45469, 16.89674, 86.46016, 95.90766, 35.44713, 24.9633, 18.66212, 13.25002, 11.38776, 8.628849, 7.994799, 5.776977,
   4.779352, 4.759573, 3.497222, 3.659529, 3.400254, 3.428219, 2.526217, 2.684323, 1.581116, 2.216145, 3.122971, 2.290085, 2.015834, 3.049206, 1.424901, 1.557495,
   0.5693746, 2.101519, 0.5156738, 0.3557063, 1.095362, 0, 1.93493, 0, 1.155297, 1.603009, 0.2017064, 1.182938, 0, 1.097316, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3003,h_data_sig_cut_fy3003,h_data_sig_cut_felx3003,h_data_sig_cut_fehx3003,h_data_sig_cut_fely3003,h_data_sig_cut_fehy3003);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3003 = new TH1F("Graph_h_data_sig_cut3003","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3003->SetMinimum(8.2446);
   Graph_h_data_sig_cut3003->SetMaximum(8244.6);
   Graph_h_data_sig_cut3003->SetDirectory(nullptr);
   Graph_h_data_sig_cut3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data_sig_cut3003->SetLineColor(ci);
   Graph_h_data_sig_cut3003->GetXaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3003->GetXaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3003->GetXaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3003->GetYaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3003->GetYaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3003->GetZaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3003->GetZaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data_sig_cut3003);
   
   grae->Draw("p");
   
   Double_t gauss1_fx4[106] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[106] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.029882e-311, 9.109815e-265, 5.273502e-222, 5.877525e-183,
   1.261234e-147, 5.210775e-116, 4.144907e-88, 6.347943e-64, 1.871789e-43, 1.062641e-26, 1.161508e-13, 0.0002444349, 0.4533394, 8.754393, 31.48077, 99.03989, 272.5965, 656.4111, 1382.856, 2548.727,
   4109.746, 5797.653, 7155.414, 7726.143, 7298.543, 6031.911, 4361.332, 2758.854, 1526.805, 739.2377, 313.1338, 116.0436, 37.62337, 10.67185, 0.574963, 0.0003355716,
   1.868336e-13, 2.002767e-26, 4.133441e-43, 1.642475e-63, 1.256584e-87, 1.85093e-115, 5.249212e-147, 2.866184e-182, 3.013142e-221, 6.098752e-264, 2.376666e-310, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(106,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",106,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(8.498758);
   Graph_gauss14->SetMaximum(8498.758);
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
   Double_t DCB_fy5[104] = { 0, 1.01772, 1.01772, 1.056937, 1.098748, 1.143399, 1.191169, 1.242372, 1.297364, 1.356551, 1.420394, 1.489425, 1.564254, 1.645587, 1.734247, 1.831192, 1.93755,
   2.054656, 2.184094, 2.327768, 2.487972, 2.667501, 2.869791, 3.099103, 3.360784, 3.661622, 4.010357, 4.418406, 4.900949, 5.478552, 6.179719, 7.044976, 8.133719,
   9.536196, 11.39564, 13.95203, 17.63596, 23.29329, 32.80704, 51.22614, 97.05, 154.4349, 208.6977, 304.5345, 384.1807, 506.0014, 709.656, 1100.17, 2053.809,
   4914.592, 8775.534, 10841.81, 9267.719, 5481.332, 2314.692, 1188.854, 751.5493, 529.5648, 398.9519, 314.5051, 213.9661, 157.6072, 98.50236, 51.72299, 33.04241,
   23.42589, 17.71917, 14.00824, 11.4357, 9.565924, 8.156499, 7.062887, 6.194103, 5.490311, 4.910708, 4.426612, 4.017334, 3.667615, 3.365976, 3.103637, 2.873778,
   2.671029, 2.491111, 2.330577, 2.186619, 2.056935, 1.939617, 1.833072, 1.735964, 1.64716, 1.565699, 1.490756, 1.421624, 1.35769, 1.298421, 1.243355, 1.192085,
   1.144255, 1.099548, 1.057687, 1.018424, 1.018424, 1.018424, 0 };
   graph = new TGraph(104,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",104,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(11.926);
   Graph_DCB5->SetMaximum(11926);
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
   
   Double_t model_fx6[106] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[106] = { 0, 1.01772, 1.01772, 1.056937, 1.098748, 1.143399, 1.191169, 1.242372, 1.297364, 1.356551, 1.420394, 1.489425, 1.564254, 1.645587, 1.734247, 1.831192, 1.93755,
   2.054656, 2.184094, 2.327768, 2.487972, 2.667501, 2.869791, 3.099103, 3.360784, 3.661622, 4.010357, 4.418406, 4.900949, 5.478552, 6.179719, 7.044976, 8.133719,
   9.536196, 11.39564, 13.95203, 17.63596, 23.29329, 32.80704, 51.22614, 97.05024, 154.8911, 217.5165, 280.8384, 404.4501, 659.4576, 1169.709, 2110.438, 3689.715,
   6251.818, 10892.08, 16261.54, 19092.99, 17276.67, 12347.47, 7559.549, 4826.709, 3124.565, 2070.135, 1464.589, 1134.252, 950.647, 837.2256, 690.7186, 500.8467,
   281.3841, 164.1348, 98.25442, 60.43188, 38.38899, 25.35242, 17.5097, 12.69087, 9.651139, 7.671498, 6.33362, 5.392075, 4.70138, 4.174174, 3.75714, 3.417078,
   3.132806, 2.890428, 2.680533, 2.496536, 2.333673, 2.188387, 2.057944, 1.940193, 1.833401, 1.736151, 1.647267, 1.56576, 1.490791, 1.421644, 1.357701, 1.298428,
   1.243359, 1.192087, 1.144256, 1.099549, 1.057688, 1.018425, 1.018425, 1.018425, 0 };
   graph = new TGraph(106,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",106,-12.3003,12.3003);
   Graph_model6->SetMinimum(21.00229);
   Graph_model6->SetMaximum(21002.29);
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
   
   TH1D *frame_tau_101be0a0__6 = new TH1D("frame_tau_101be0a0__6"," ",80,-10,10);
   frame_tau_101be0a0__6->SetBinContent(1,20047.64);
   frame_tau_101be0a0__6->SetMinimum(1.5);
   frame_tau_101be0a0__6->SetMaximum(133183.3);
   frame_tau_101be0a0__6->SetEntries(4);
   frame_tau_101be0a0__6->SetDirectory(nullptr);
   frame_tau_101be0a0__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_101be0a0__6->SetLineColor(ci);
   frame_tau_101be0a0__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_101be0a0__6->GetXaxis()->SetLabelFont(42);
   frame_tau_101be0a0__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_101be0a0__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_101be0a0__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_101be0a0__6->GetXaxis()->SetTitleFont(42);
   frame_tau_101be0a0__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_101be0a0__6->GetYaxis()->SetLabelFont(42);
   frame_tau_101be0a0__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_101be0a0__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_101be0a0__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_101be0a0__6->GetYaxis()->SetTitleFont(42);
   frame_tau_101be0a0__6->GetZaxis()->SetLabelFont(42);
   frame_tau_101be0a0__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_101be0a0__6->GetZaxis()->SetTitleFont(42);
   frame_tau_101be0a0__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"5 GeV/c < #it{p}_{T}^{#mu#mu} < 6 GeV/c");
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
   
   TPaveText *pt = new TPaveText(0.4764729,0.94,0.5235271,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 41 / 58 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1_TauzPP__2->Modified();
   cTauzFig_PP->cd();
  
// ------------>Primitives in pad: pad2_TauzPP
   TPad *pad2_TauzPP__3 = new TPad("pad2_TauzPP", "",0,0,1,0.228);
   pad2_TauzPP__3->Draw();
   pad2_TauzPP__3->cd();
   pad2_TauzPP__3->Range(-12.5,-16.00373,12.5,5.9);
   pad2_TauzPP__3->SetFillColor(0);
   pad2_TauzPP__3->SetBorderMode(0);
   pad2_TauzPP__3->SetBorderSize(2);
   pad2_TauzPP__3->SetTopMargin(0);
   pad2_TauzPP__3->SetBottomMargin(0.4);
   pad2_TauzPP__3->SetFrameBorderMode(0);
   pad2_TauzPP__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_1059b690__7 = new TH1D("frame_tau_1059b690__7"," ",100,-10,10);
   frame_tau_1059b690__7->SetMinimum(-7.242239);
   frame_tau_1059b690__7->SetMaximum(5.9);
   frame_tau_1059b690__7->SetDirectory(nullptr);
   frame_tau_1059b690__7->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_1059b690__7->SetLineColor(ci);
   frame_tau_1059b690__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_1059b690__7->GetXaxis()->SetLabelFont(42);
   frame_tau_1059b690__7->GetXaxis()->SetLabelSize(0.12);
   frame_tau_1059b690__7->GetXaxis()->SetTitleSize(0.14);
   frame_tau_1059b690__7->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_1059b690__7->GetXaxis()->SetTitleFont(42);
   frame_tau_1059b690__7->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_1059b690__7->GetYaxis()->SetNdivisions(6);
   frame_tau_1059b690__7->GetYaxis()->SetLabelFont(42);
   frame_tau_1059b690__7->GetYaxis()->SetLabelSize(0.12);
   frame_tau_1059b690__7->GetYaxis()->SetTitleSize(0.12);
   frame_tau_1059b690__7->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_1059b690__7->GetYaxis()->SetTitleFont(42);
   frame_tau_1059b690__7->GetZaxis()->SetLabelFont(42);
   frame_tau_1059b690__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_1059b690__7->GetZaxis()->SetTitleFont(42);
   frame_tau_1059b690__7->Draw("FUNC");
   
   Double_t hpull_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpull_fy3004[80] = { -0.07130522, -0.003360923, 0.02258916, -0.01242131, -0.05721743, 0, -0.6195788, -0.06287328, -0.2850774, 0, -0.894591, 0, 0, 0.660237, -0.3183047, -0.2709263, 0.636826,
   0.3755353, 1.576594, 0.145295, 1.160667, -1.413585, -0.6483774, 1.491726, 0.2150124, 1.122463, 0.009883251, -1.080675, -0.4093712, 1.140555, -0.06237807, -0.04846769, -0.2540424,
   0.4054255, -1.64787, -0.6679772, -1.234872, -1.889674, 0.3462018, -0.788499, 0.5343463, 0.9011256, -0.1516823, -0.01580178, -1.860051, 1.021819, -0.8167962, 1.284536, -0.8796236,
   -1.166178, 0.3702677, -0.0602058, 0.7726639, 0.9903136, -0.5201343, -0.6660634, 0.1647305, -1.987283, -0.2666599, 1.970529, 1.001971, 0.02090003, 0.9323435, -2.015011, 0.05102099,
   -4.78631, 0.2497216, -4.461056, -5.755916, -1.122909, 0, 0.8827586, 0, -0.1495439, 0.6211422, -5.037105, -0.483215, 0, 0.01704, 0 };
   Double_t hpull_felx3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fely3004[80] = { 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0 };
   Double_t hpull_fehx3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fehy3004[80] = { 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0 };
   grae = new TGraphAsymmErrors(80,hpull_fx3004,hpull_fy3004,hpull_felx3004,hpull_fehx3004,hpull_fely3004,hpull_fehy3004);
   grae->SetName("hpull");
   grae->SetTitle("Pull of Histogram of data_sig_cut_plot__tau and Projection of ");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpull3004 = new TH1F("Graph_hpull3004","Pull of Histogram of data_sig_cut_plot__tau and Projection of ",100,-11.85,11.85);
   Graph_hpull3004->SetMinimum(-7.728561);
   Graph_hpull3004->SetMaximum(3.943173);
   Graph_hpull3004->SetDirectory(nullptr);
   Graph_hpull3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_hpull3004->SetLineColor(ci);
   Graph_hpull3004->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   Graph_hpull3004->GetXaxis()->SetRange(8,93);
   Graph_hpull3004->GetXaxis()->SetLabelFont(42);
   Graph_hpull3004->GetXaxis()->SetTitleOffset(1);
   Graph_hpull3004->GetXaxis()->SetTitleFont(42);
   Graph_hpull3004->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_hpull3004->GetYaxis()->SetLabelFont(42);
   Graph_hpull3004->GetYaxis()->SetTitleFont(42);
   Graph_hpull3004->GetZaxis()->SetLabelFont(42);
   Graph_hpull3004->GetZaxis()->SetTitleOffset(1);
   Graph_hpull3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hpull3004);
   
   grae->Draw("px");
   
   TH1D *frame_tau_1059b690__8 = new TH1D("frame_tau_1059b690__8"," ",100,-10,10);
   frame_tau_1059b690__8->SetMinimum(-7.242239);
   frame_tau_1059b690__8->SetMaximum(5.9);
   frame_tau_1059b690__8->SetDirectory(nullptr);
   frame_tau_1059b690__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_1059b690__8->SetLineColor(ci);
   frame_tau_1059b690__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_1059b690__8->GetXaxis()->SetLabelFont(42);
   frame_tau_1059b690__8->GetXaxis()->SetLabelSize(0.12);
   frame_tau_1059b690__8->GetXaxis()->SetTitleSize(0.14);
   frame_tau_1059b690__8->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_1059b690__8->GetXaxis()->SetTitleFont(42);
   frame_tau_1059b690__8->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_1059b690__8->GetYaxis()->SetNdivisions(6);
   frame_tau_1059b690__8->GetYaxis()->SetLabelFont(42);
   frame_tau_1059b690__8->GetYaxis()->SetLabelSize(0.12);
   frame_tau_1059b690__8->GetYaxis()->SetTitleSize(0.12);
   frame_tau_1059b690__8->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_1059b690__8->GetYaxis()->SetTitleFont(42);
   frame_tau_1059b690__8->GetZaxis()->SetLabelFont(42);
   frame_tau_1059b690__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_1059b690__8->GetZaxis()->SetTitleFont(42);
   frame_tau_1059b690__8->Draw("AXISSAME");
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
   pad2_TauzPP__3->Modified();
   cTauzFig_PP->cd();
   cTauzFig_PP->Modified();
   cTauzFig_PP->SetSelected(cTauzFig_PP);
}
