#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 2DFitbis_pT2_3()
{
//=========Macro generated from canvas: 2DFitbis/2DFitbis
//=========  (Mon Mar 31 11:24:28 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_tau_10a82220__13 = new TH1D("frame_tau_10a82220__13"," ",80,-10,10);
   frame_tau_10a82220__13->SetBinContent(1,76465.07);
   frame_tau_10a82220__13->SetMinimum(5);
   frame_tau_10a82220__13->SetMaximum(1000000);
   frame_tau_10a82220__13->SetEntries(2);
   frame_tau_10a82220__13->SetDirectory(nullptr);
   frame_tau_10a82220__13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_10a82220__13->SetLineColor(ci);
   frame_tau_10a82220__13->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10a82220__13->GetXaxis()->SetLabelFont(42);
   frame_tau_10a82220__13->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10a82220__13->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10a82220__13->GetXaxis()->SetTitleOffset(1);
   frame_tau_10a82220__13->GetXaxis()->SetTitleFont(42);
   frame_tau_10a82220__13->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10a82220__13->GetYaxis()->SetLabelFont(42);
   frame_tau_10a82220__13->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10a82220__13->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10a82220__13->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10a82220__13->GetYaxis()->SetTitleFont(42);
   frame_tau_10a82220__13->GetZaxis()->SetLabelFont(42);
   frame_tau_10a82220__13->GetZaxis()->SetTitleOffset(1);
   frame_tau_10a82220__13->GetZaxis()->SetTitleFont(42);
   frame_tau_10a82220__13->Draw("FUNC");
   
   Double_t h_data_fx3007[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3007[80] = { 11, 13, 12, 23, 10, 25, 26, 22, 21, 24, 21, 32, 18, 27, 18, 47, 52,
   38, 57, 51, 65, 84, 70, 84, 78, 83, 113, 127, 162, 177, 197, 233, 265,
   309, 392, 567, 846, 1342, 4166, 34411, 43224, 9112, 4151, 2310, 1423, 951, 604, 450, 358,
   276, 255, 195, 177, 144, 109, 107, 90, 85, 66, 72, 57, 61, 53, 48, 38,
   26, 34, 34, 31, 25, 20, 20, 21, 18, 23, 12, 18, 17, 11, 19 };
   Double_t h_data_felx3007[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3007[80] = { 3.265579, 3.558662, 3.415266, 4.760717, 3.108694, 4.966335, 5.066015, 4.654502, 4.545807, 4.864612, 4.545807, 5.627135, 4.202887, 5.163771, 4.202887, 6.831172, 7.187836,
   6.137163, 7.527619, 7.117933, 8.041463, 9.146873, 8.346566, 9.146873, 8.812788, 9.092044, 10.1419, 10.78051, 12.23774, 12.81353, 13.54457, 14.77252, 15.7865,
   17.08551, 19.3053, 23.31701, 28.59038, 36.13673, 64.04649, 185.0027, 207.4044, 94.95811, 63.93019, 47.56506, 37.22599, 30.34234, 24.0815, 20.7191, 18.42749,
   16.12077, 15.47655, 13.47319, 12.81353, 11.51041, 9.952272, 9.856158, 9.469177, 9.201374, 8.103403, 8.465529, 7.527619, 7.788779, 7.257065, 6.903979, 6.137163,
   5.066015, 5.802128, 5.802128, 5.537565, 4.966335, 4.434448, 4.434448, 4.545807, 4.202887, 4.760717, 3.415266, 4.202887, 4.082184, 3.265579, 4.320219 };
   Double_t h_data_fehx3007[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3007[80] = { 4.416521, 4.697573, 4.559819, 5.865235, 4.26695, 6.066589, 6.164324, 5.761366, 5.655182, 5.966932, 5.655182, 6.715753, 5.321007, 6.260244, 5.321007, 7.904289, 8.257346,
   7.218484, 8.594007, 8.188122, 9.103628, 10.20155, 9.406468, 10.20155, 9.869531, 10.14705, 11.1419, 11.78051, 13.23774, 13.81353, 14.54457, 15.77252, 16.7865,
   18.08551, 20.3053, 24.31701, 29.59038, 37.13673, 65.04649, 186.0027, 208.4044, 95.95811, 64.93019, 48.56506, 38.22599, 31.34234, 25.0815, 21.7191, 19.42749,
   17.12077, 16.47655, 14.47319, 13.81353, 12.51041, 10.95227, 10.85616, 10.522, 10.25573, 9.165094, 9.524592, 8.594007, 8.852952, 8.325916, 7.97633, 7.218484,
   6.164324, 6.888101, 6.888101, 6.627601, 6.066589, 5.546519, 5.546519, 5.655182, 5.321007, 5.865235, 4.559819, 5.321007, 5.203719, 4.416521, 5.435196 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3007,h_data_fy3007,h_data_felx3007,h_data_fehx3007,h_data_fely3007,h_data_fehy3007);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3007 = new TH1F("Graph_h_data3007","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3007->SetMinimum(6.202175);
   Graph_h_data3007->SetMaximum(47774.96);
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
   
   Double_t model2_fx11[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25,
   -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25,
   0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t model2_fy11[116] = { 4.876206, 5.489236, 6.179336, 6.956194, 7.830718, 8.815186, 9.923419, 11.17098, 12.57538, 14.15634, 15.93606, 17.93952, 20.19485, 22.73372, 25.59177, 28.80914, 32.43099,
   36.50817, 41.09793, 46.2647, 52.08104, 58.6286, 65.99932, 74.29667, 83.63717, 94.15199, 105.9889, 119.3144, 134.3171, 151.2126, 170.2553, 191.773, 216.2786,
   244.8522, 280.4663, 332.6003, 433.3481, 530.0342, 693.6572, 981.4643, 1203.005, 1504.608, 1924.032, 2197.098, 2527.972, 2932.711, 3431.169, 4047.269, 4811.876,
   5775.369, 7040.198, 8809.775, 11399.76, 15099.5, 19826.89, 24779.06, 28520.62, 29716, 28020.17, 24308.03, 20022.06, 16282.85, 13493.22, 11525.16, 10090.12,
   8963.696, 8026.303, 7224.153, 6530.333, 5926.215, 5396.189, 4508.413, 3791.769, 3202.338, 2713.567, 2307.046, 1686.279, 1254.09, 951.7467, 738.898, 479.4295,
   342.4217, 264.8104, 216.6661, 183.7095, 159.0612, 139.3485, 122.867, 108.7117, 96.3664, 85.50785, 75.91294, 67.41363, 59.87484, 53.18333, 47.24163, 41.96469,
   37.27763, 33.11428, 29.41601, 26.13082, 23.21254, 20.62019, 18.31735, 16.27169, 14.45449, 12.84023, 11.40625, 10.13242, 9.000842, 7.99564, 7.102698, 6.309479,
   5.604845, 4.978904, 4.978904 };
   TGraph *graph = new TGraph(116,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",116,-12,12);
   Graph_model211->SetMinimum(4.388586);
   Graph_model211->SetMaximum(32687.11);
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
   
   Double_t tausigModel_fx12[108] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.40625, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t tausigModel_fy12[108] = { 4.779571, 4.963247, 5.159063, 5.368174, 5.591884, 5.831664, 6.089181, 6.366332, 6.665286, 6.988526, 7.338916, 7.719765, 8.134924, 8.588894, 9.086963, 9.635386, 10.24161,
   10.91456, 11.66502, 12.50612, 13.454, 14.52872, 15.75544, 17.16614, 18.80203, 20.71698, 22.98271, 25.69655, 28.99357, 33.0662, 38.19715, 44.81721, 53.61258,
   65.73823, 83.27943, 110.3671, 156.3117, 246.5841, 500.9289, 695.0889, 1115.968, 1491.69, 2041.922, 2827.466, 3917.622, 5394.986, 7385.906, 10186.49, 14831.2,
   22779.97, 31997.04, 39788.58, 43068.61, 40359.34, 32888.4, 23672.47, 15506.97, 10534.53, 7620.061, 5566.95, 4045.494, 2920.91, 2108.352, 1537.611, 1147.011,
   884.498, 709.0094, 507.7345, 334.4324, 248.2285, 157.0763, 110.7935, 83.54532, 65.91706, 53.73963, 44.91129, 38.26912, 33.12271, 29.0389, 25.73358, 23.01343,
   20.74279, 18.82396, 17.18498, 15.77176, 14.54296, 13.46652, 12.51719, 11.67487, 10.92338, 10.24954, 9.642542, 9.093449, 8.594796, 8.140313, 7.724701, 7.34345,
   6.992704, 6.669145, 6.369906, 6.092497, 5.834749, 5.59476, 5.37086, 5.161575, 4.965602, 4.781781, 4.781781 };
   graph = new TGraph(108,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",108,-12,12);
   Graph_tausigModel12->SetMinimum(4.301614);
   Graph_tausigModel12->SetMaximum(47374.99);
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
   
   Double_t exp_np_fx13[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.375, 0.4375, 0.5, 0.5625, 0.625, 0.6875,
   0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_np_fy13[113] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 2.293665e-292, 3.821509e-265, 3.009847e-239, 1.120915e-214, 1.974478e-191, 1.645661e-169, 6.492675e-149, 1.213184e-129, 1.074293e-111, 4.511796e-95, 8.995593e-80, 8.52519e-66, 3.846599e-53, 8.281168e-42,
   8.531972e-32, 4.224889e-23, 1.012027e-15, 1.184832e-09, 6.901889e-05, 0.2070848, 3.809711, 12.54175, 21.39199, 35.24, 56.68657, 90.54667, 146.023, 238.6317, 388.4784, 611.2685,
   903.8401, 1234.644, 1550.847, 1801.196, 1958.567, 2026.067, 2026.02, 1984.131, 1919.832, 1844.679, 1522.963, 1372.42, 1234.828, 1110.474, 998.5118, 897.813,
   807.2655, 725.8496, 652.6447, 586.8228, 527.6393, 474.4247, 426.5771, 383.555, 344.8719, 278.8163, 225.4128, 182.238, 147.3327, 119.1131, 96.2986, 62.94202,
   41.13972, 26.88946, 17.5753, 11.48745, 7.508344, 4.907552, 3.20764, 2.096555, 1.370336, 0.8956693, 0.5854211, 0.3826389, 0.2500977, 0.1634671, 0.1068443, 0.0698348,
   0.04564493, 0.02983412, 0.01949997, 0.01274544, 0.008330583, 0.005444978, 0.003558908, 0.002326149, 0.001520401, 0.000993754, 0.0006495306, 0.0004245416, 0.000277486, 0.0001813684, 0.0001185448, 0.0001185448 };
   graph = new TGraph(113,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",113,-12,12);
   Graph_exp_np13->SetMinimum(2.228674);
   Graph_exp_np13->SetMaximum(2228.674);
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
   
   Double_t Fit_Total_fx14[111] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75,
   3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75,
   7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[111] = { 9.655777, 10.45248, 11.3384, 12.32437, 13.4226, 14.64685, 16.0126, 17.53731, 19.24067, 21.14487, 23.27497, 25.65928, 28.32977, 31.32261, 34.67874, 38.44452, 42.6726,
   47.42273, 52.76294, 58.77082, 65.53505, 73.15733, 81.75476, 91.46282, 102.4392, 114.869, 128.9716, 145.011, 163.3107, 184.2788, 208.4525, 236.5902, 269.8912,
   310.5905, 363.7457, 442.9675, 589.6598, 940.2414, 1313.136, 2005.744, 2620.092, 3647.749, 4431.463, 5485.632, 6896.127, 8764.738, 11227.04, 14516.65, 19142.29,
   26469.59, 38267.94, 52435.2, 65471.48, 72823.87, 71626.18, 62709.77, 49939.06, 37555.1, 28843.4, 23097.42, 19011.94, 15980.29, 13649.36, 11817.96, 10364.05,
   9200.307, 8256.889, 7477.619, 6250.976, 5303.966, 4535.282, 3362.54, 2532.935, 1938.806, 1194.564, 788.3876, 555.6715, 414.8486, 324.5194, 263.1183, 219.0734,
   185.9627, 160.088, 139.2335, 122.0167, 107.5395, 95.19448, 84.55572, 75.31347, 67.23527, 60.14146, 53.88966, 48.36447, 43.47066, 39.12839, 35.26991, 31.83717,
   28.78, 26.05479, 23.62347, 21.45264, 19.51293, 17.77848, 16.22643, 14.83658, 13.59105, 12.47398, 11.47133, 10.57063, 9.760804, 9.760804 };
   graph = new TGraph(111,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",111,-12,12);
   Graph_Fit_Total14->SetMinimum(8.6902);
   Graph_Fit_Total14->SetMaximum(80105.29);
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
   
   TH1D *frame_tau_10a82220__14 = new TH1D("frame_tau_10a82220__14"," ",80,-10,10);
   frame_tau_10a82220__14->SetBinContent(1,76465.07);
   frame_tau_10a82220__14->SetMinimum(5);
   frame_tau_10a82220__14->SetMaximum(1000000);
   frame_tau_10a82220__14->SetEntries(2);
   frame_tau_10a82220__14->SetDirectory(nullptr);
   frame_tau_10a82220__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_10a82220__14->SetLineColor(ci);
   frame_tau_10a82220__14->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10a82220__14->GetXaxis()->SetLabelFont(42);
   frame_tau_10a82220__14->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10a82220__14->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10a82220__14->GetXaxis()->SetTitleOffset(1);
   frame_tau_10a82220__14->GetXaxis()->SetTitleFont(42);
   frame_tau_10a82220__14->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10a82220__14->GetYaxis()->SetLabelFont(42);
   frame_tau_10a82220__14->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10a82220__14->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10a82220__14->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10a82220__14->GetYaxis()->SetTitleFont(42);
   frame_tau_10a82220__14->GetZaxis()->SetLabelFont(42);
   frame_tau_10a82220__14->GetZaxis()->SetTitleOffset(1);
   frame_tau_10a82220__14->GetZaxis()->SetTitleFont(42);
   frame_tau_10a82220__14->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"2 GeV/c < #it{p}_{T}^{#mu#mu} < 3 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 51879#pm285");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 57186#pm295");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.128708#pm0.002769");
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
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 360 / 78 ");
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
   pad2_2DFitbis__7->Range(-12.5,-20.27673,12.5,6.934297);
   pad2_2DFitbis__7->SetFillColor(0);
   pad2_2DFitbis__7->SetBorderMode(0);
   pad2_2DFitbis__7->SetBorderSize(2);
   pad2_2DFitbis__7->SetTopMargin(0);
   pad2_2DFitbis__7->SetBottomMargin(0.4);
   pad2_2DFitbis__7->SetFrameBorderMode(0);
   pad2_2DFitbis__7->SetFrameBorderMode(0);
   
   TH1D *frame_tau_147dcbe0__15 = new TH1D("frame_tau_147dcbe0__15"," ",25,-10,10);
   frame_tau_147dcbe0__15->SetBinContent(1,6.934297);
   frame_tau_147dcbe0__15->SetMinimum(-9.39232);
   frame_tau_147dcbe0__15->SetMaximum(6.934297);
   frame_tau_147dcbe0__15->SetEntries(1);
   frame_tau_147dcbe0__15->SetDirectory(nullptr);
   frame_tau_147dcbe0__15->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_147dcbe0__15->SetLineColor(ci);
   frame_tau_147dcbe0__15->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_147dcbe0__15->GetXaxis()->SetLabelFont(42);
   frame_tau_147dcbe0__15->GetXaxis()->SetLabelSize(0.12);
   frame_tau_147dcbe0__15->GetXaxis()->SetTitleSize(0.14);
   frame_tau_147dcbe0__15->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_147dcbe0__15->GetXaxis()->SetTitleFont(42);
   frame_tau_147dcbe0__15->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_147dcbe0__15->GetYaxis()->SetNdivisions(6);
   frame_tau_147dcbe0__15->GetYaxis()->SetLabelFont(42);
   frame_tau_147dcbe0__15->GetYaxis()->SetLabelSize(0.12);
   frame_tau_147dcbe0__15->GetYaxis()->SetTitleSize(0.12);
   frame_tau_147dcbe0__15->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_147dcbe0__15->GetYaxis()->SetTitleFont(42);
   frame_tau_147dcbe0__15->GetZaxis()->SetLabelFont(42);
   frame_tau_147dcbe0__15->GetZaxis()->SetTitleOffset(1);
   frame_tau_147dcbe0__15->GetZaxis()->SetTitleFont(42);
   frame_tau_147dcbe0__15->Draw("FUNC");
   
   Double_t hpullbis_fx3008[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpullbis_fy3008[80] = { 0.2896483, 0.5913904, 0.0493713, 2.127099, -0.9455762, 1.947165, 1.820967, 0.7758105, 0.1775777, 0.3679801, -0.6130885, 0.889524, -2.222548, -0.958537, -3.488368, 0.942948, 0.9672368,
   -1.67526, 0.1638126, -1.362087, -0.4774126, 0.7154309, -1.765678, -1.269514, -3.105931, -3.835625, -2.153249, -2.305573, -0.8909946, -1.401934, -1.7547, -1.283288, -1.503638,
   -1.557495, -0.5592917, 2.173794, 2.83485, -1.375035, -1.124472, 4.704996, 5.187357, -7.620658, -7.665602, -5.802605, -3.758822, -1.291402, -2.71234, -1.623458, -0.6014148,
   -1.040774, 0.898401, -0.5194468, 0.3101917, -0.4524816, -1.974486, -0.7164685, -1.080305, -0.4753537, -1.520398, 0.08571568, -0.7782594, 0.5115611, 0.2580839, 0.3016279, -0.4570938,
   -1.816769, 0.0769472, 0.6362174, 0.6469639, 0.032392, -0.4575937, -0.08704284, 0.5179041, 0.2373469, 1.568775, -0.4855054, 1.181922, 1.231533, -0.004750281, 2.044869 };
   Double_t hpullbis_felx3008[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpullbis_fely3008[80] = { 1, 1, 1, 1, 0.7285519, 1, 1, 1, 1, 1, 0.8038304, 1, 0.7898668, 0.8248515, 0.7898668, 1, 1,
   0.8502012, 1, 0.8692998, 0.8833251, 1, 0.8873221, 0.8966161, 0.8929288, 0.8960284, 0.9102487, 0.9151141, 0.9244584, 0.9276072, 0.9312458, 0.9365986, 0.9404283,
   0.9447071, 0.9507518, 1, 1, 0.9730725, 0.9846264, 1, 1, 0.9895788, 0.9845988, 0.9794091, 0.9738398, 0.9680943, 0.96013, 0.9539576, 0.9485266,
   0.9415914, 1, 0.9309067, 1, 0.9200666, 0.9086947, 0.9078864, 0.8999411, 0.8971937, 0.8841592, 1, 0.8759149, 1, 1, 1, 0.8502012,
   0.8218281, 1, 1, 1, 1, 0.7995011, 0.7995011, 1, 1, 1, 0.7489916, 1, 1, 0.7394009, 1 };
   Double_t hpullbis_fehx3008[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpullbis_fehy3008[80] = { 1.352446, 1.320039, 1.335129, 1.232007, 1, 1.221543, 1.216799, 1.237805, 1.244044, 1.2266, 1, 1.193459, 1, 1, 1, 1.157091, 1.148794,
   1, 1.141663, 1, 1, 1.115305, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1.042887, 1.034977, 1, 1, 1.005405, 1.004821, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1.064614, 1, 1.078043, 1, 1, 1, 1, 1, 1, 1.125103, 1, 1.136629, 1.147284, 1.155324, 1,
   1, 1.187168, 1.187168, 1.196844, 1.221543, 1, 1, 1.244044, 1.266036, 1.232007, 1, 1.266036, 1.274739, 1, 1.258083 };
   grae = new TGraphAsymmErrors(80,hpullbis_fx3008,hpullbis_fy3008,hpullbis_felx3008,hpullbis_fehx3008,hpullbis_fely3008,hpullbis_fehy3008);
   grae->SetName("hpullbis");
   grae->SetTitle("Pull of Histogram of data_plot__tau and Projection of Fit_Total");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpullbis3008 = new TH1F("Graph_hpullbis3008","Pull of Histogram of data_plot__tau and Projection of Fit_Total",100,-11.85,11.85);
   Graph_hpullbis3008->SetMinimum(-10.13444);
   Graph_hpullbis3008->SetMaximum(7.676416);
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
   
   TH1D *frame_tau_147dcbe0__16 = new TH1D("frame_tau_147dcbe0__16"," ",25,-10,10);
   frame_tau_147dcbe0__16->SetBinContent(1,6.934297);
   frame_tau_147dcbe0__16->SetMinimum(-9.39232);
   frame_tau_147dcbe0__16->SetMaximum(6.934297);
   frame_tau_147dcbe0__16->SetEntries(1);
   frame_tau_147dcbe0__16->SetDirectory(nullptr);
   frame_tau_147dcbe0__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_147dcbe0__16->SetLineColor(ci);
   frame_tau_147dcbe0__16->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_147dcbe0__16->GetXaxis()->SetLabelFont(42);
   frame_tau_147dcbe0__16->GetXaxis()->SetLabelSize(0.12);
   frame_tau_147dcbe0__16->GetXaxis()->SetTitleSize(0.14);
   frame_tau_147dcbe0__16->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_147dcbe0__16->GetXaxis()->SetTitleFont(42);
   frame_tau_147dcbe0__16->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_147dcbe0__16->GetYaxis()->SetNdivisions(6);
   frame_tau_147dcbe0__16->GetYaxis()->SetLabelFont(42);
   frame_tau_147dcbe0__16->GetYaxis()->SetLabelSize(0.12);
   frame_tau_147dcbe0__16->GetYaxis()->SetTitleSize(0.12);
   frame_tau_147dcbe0__16->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_147dcbe0__16->GetYaxis()->SetTitleFont(42);
   frame_tau_147dcbe0__16->GetZaxis()->SetLabelFont(42);
   frame_tau_147dcbe0__16->GetZaxis()->SetTitleOffset(1);
   frame_tau_147dcbe0__16->GetZaxis()->SetTitleFont(42);
   frame_tau_147dcbe0__16->Draw("AXISSAME");
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
