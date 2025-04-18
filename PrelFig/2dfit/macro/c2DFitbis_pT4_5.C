#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT4_5()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 19:57:13 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",200,1103,1000,800);
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
   
   TH1D *frame_tau_f625960__7 = new TH1D("frame_tau_f625960__7"," ",80,-10,10);
   frame_tau_f625960__7->SetBinContent(1,33662.92);
   frame_tau_f625960__7->SetMinimum(5);
   frame_tau_f625960__7->SetMaximum(500000);
   frame_tau_f625960__7->SetEntries(3);
   frame_tau_f625960__7->SetDirectory(nullptr);
   frame_tau_f625960__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f625960__7->SetLineColor(ci);
   frame_tau_f625960__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f625960__7->GetXaxis()->SetRange(25,56);
   frame_tau_f625960__7->GetXaxis()->SetLabelFont(42);
   frame_tau_f625960__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f625960__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f625960__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_f625960__7->GetXaxis()->SetTitleFont(42);
   frame_tau_f625960__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f625960__7->GetYaxis()->SetLabelFont(42);
   frame_tau_f625960__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f625960__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f625960__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_f625960__7->GetYaxis()->SetTitleFont(42);
   frame_tau_f625960__7->GetZaxis()->SetLabelFont(42);
   frame_tau_f625960__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_f625960__7->GetZaxis()->SetTitleFont(42);
   frame_tau_f625960__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 4, 5, 3, 4, 4, 7, 2, 4, 5, 4, 2, 5, 9, 7, 5, 6, 7,
   8, 4, 8, 7, 14, 18, 16, 16, 18, 19, 27, 32, 31, 26, 49, 58,
   80, 84, 120, 178, 312, 839, 12469, 16350, 2879, 1415, 753, 434, 271, 174, 127, 82,
   69, 41, 50, 34, 26, 18, 21, 20, 19, 6, 16, 10, 11, 11, 5, 9,
   7, 5, 6, 6, 7, 1, 4, 4, 4, 2, 2, 2, 1, 2, 3 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 1.914339, 2.159691, 1.632705, 1.914339, 1.914339, 2.58147, 1.291815, 1.914339, 2.159691, 1.914339, 1.291815, 2.159691, 2.943461, 2.58147, 2.159691, 2.379931, 2.58147,
   2.768386, 1.914339, 2.768386, 2.58147, 3.6965, 4.202887, 3.957801, 3.957801, 4.202887, 4.320219, 5.163771, 5.627135, 5.537565, 5.066015, 6.976026, 7.593751,
   8.925539, 9.146873, 10.46586, 12.85103, 17.1706, 28.46981, 111.1658, 127.3681, 53.15864, 37.11981, 26.9454, 20.33867, 15.96967, 12.70038, 10.78051, 9.036884,
   8.286444, 6.376898, 7.047337, 5.802128, 5.066015, 4.202887, 4.545807, 4.434448, 4.320219, 2.379931, 3.957801, 3.108694, 3.265579, 3.265579, 2.159691, 2.943461,
   2.58147, 2.159691, 2.379931, 2.379931, 2.58147, 0.8272462, 1.914339, 1.914339, 1.914339, 1.291815, 1.291815, 1.291815, 0.8272462, 1.291815, 1.632705 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 3.162753, 3.382473, 2.918186, 3.162753, 3.162753, 3.770281, 2.63786, 3.162753, 3.382473, 3.162753, 2.63786, 3.382473, 4.110204, 3.770281, 3.382473, 3.583642, 3.770281,
   3.945142, 3.162753, 3.945142, 3.770281, 4.830381, 5.321007, 5.083066, 5.083066, 5.321007, 5.435196, 6.260244, 6.715753, 6.627601, 6.164324, 8.047634, 8.659564,
   9.981567, 10.20155, 11.46586, 13.85103, 18.1706, 29.46981, 112.1658, 128.3681, 54.15864, 38.11981, 27.9454, 21.33867, 16.96967, 13.70038, 11.78051, 10.09222,
   9.346779, 7.455185, 8.118225, 6.888101, 6.164324, 5.321007, 5.655182, 5.546519, 5.435196, 3.583642, 5.083066, 4.26695, 4.416521, 4.416521, 3.382473, 4.110204,
   3.770281, 3.382473, 3.583642, 3.583642, 3.770281, 2.299527, 3.162753, 3.162753, 3.162753, 2.63786, 2.63786, 2.63786, 2.299527, 2.63786, 2.918186 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(0.1554784);
   Graph_h_data3004->SetMaximum(18126.19);
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
   
   Double_t model2_fx11[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t model2_fy11[116] = { 0.3385138, 0.3925073, 0.4551129, 0.5277041, 0.6118738, 0.7094687, 0.8226301, 0.9538409, 1.10598, 1.282386, 1.486928, 1.724096, 1.999092, 2.31795, 2.687667, 3.116355, 3.613418,
   4.189765, 4.858039, 5.632904, 6.531361, 7.573124, 8.78105, 10.18164, 11.80563, 13.68865, 15.87201, 18.40362, 21.33904, 24.74267, 28.68932, 33.26612, 38.57647,
   44.75305, 52.01887, 61.00714, 74.48063, 106.6277, 147.0598, 181.8752, 233.385, 310.3113, 362.2477, 426.086, 504.7876, 602.2699, 723.8912, 877.1659, 1072.818,
   1326.845, 1665.485, 2133.805, 2796.522, 3698.967, 4770.838, 5749.18, 6268.081, 6117.637, 5421.262, 4522.939, 3719.877, 3121.39, 2698.441, 2387.047, 2140.94,
   1935.468, 1757.964, 1601.239, 1460.899, 1334.185, 1114.878, 933.5676, 783.4634, 659.1173, 556.0445, 470.5441, 399.5612, 291.5017, 216.5268, 164.1821, 101.1436,
   68.46761, 50.3469, 39.38498, 32.09515, 26.81187, 22.72092, 19.40864, 16.65215, 14.32129, 12.33261, 10.62749, 9.161557, 7.899429, 6.811917, 5.874466, 5.066186,
   4.369193, 3.768125, 3.249761, 2.802714, 2.417167, 2.084658, 1.797891, 1.550572, 1.337274, 1.153318, 0.9946668, 0.8578399, 0.739835, 0.6380629, 0.5502906, 0.4745924,
   0.4093072, 0.3530027, 0.3530027 };
   TGraph *graph = new TGraph(116,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",116,-12,12);
   Graph_model211->SetMinimum(0.3046624);
   Graph_model211->SetMaximum(6894.856);
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
   Double_t tausigModel_fy12[102] = { 1.670718, 1.736672, 1.807055, 1.882294, 1.962871, 2.04933, 2.142287, 2.242447, 2.350613, 2.467709, 2.594798, 2.733114, 2.884092, 3.04941, 3.231047, 3.431343, 3.653089,
   3.899634, 4.175032, 4.484228, 4.833308, 5.229846, 5.683365, 6.205988, 6.813364, 7.526003, 8.371258, 9.38633, 10.62298, 12.15512, 14.09163, 16.59891, 19.94277,
   24.57209, 31.30003, 41.74324, 59.55871, 94.7808, 185.6577, 311.1722, 477.1828, 651.0211, 956.6942, 1487.397, 2374.301, 3803.448, 6154.738, 10634.33, 16846.53,
   22700.94, 25499.58, 23706.97, 18322.97, 11974.71, 6930.713, 4240.176, 2646.813, 1654.499, 1054.857, 706.9335, 509.1439, 323.7365, 190.2802, 96.28301, 60.25189,
   42.12709, 31.53791, 24.73124, 20.0553, 16.68188, 14.15486, 12.20459, 10.66253, 9.418545, 8.397901, 7.548334, 6.832298, 6.222205, 5.69738, 5.242056, 4.844021,
   4.493688, 4.183436, 3.907139, 3.659823, 3.437413, 3.236541, 3.054402, 2.888642, 2.737277, 2.598618, 2.471223, 2.353855, 2.245445, 2.145067, 2.051912, 1.965275,
   1.884537, 1.809151, 1.738634, 1.672559, 1.672559 };
   graph = new TGraph(102,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",102,-12,12);
   Graph_tausigModel12->SetMinimum(1.503647);
   Graph_tausigModel12->SetMaximum(28049.37);
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
   
   Double_t exp_np_fx13[119] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875,
   0.5, 0.53125, 0.5625, 0.59375, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375,
   1.5, 1.625, 1.75, 1.875, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_np_fy13[119] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 7.35866e-300, 3.348876e-261, 3.340371e-225, 7.308535e-192, 3.511066e-161, 3.708304e-133, 8.625138e-108, 4.427803e-85,
   5.032683e-65, 1.272224e-47, 7.202278e-33, 9.23404e-21, 2.735585e-11, 0.000195134, 0.05584113, 0.5463035, 3.781988, 8.904533, 19.88664, 42.88636, 89.73076, 179.0802, 330.6933, 549.7773,
   811.1651, 1062.497, 1251.168, 1352.784, 1376.387, 1347.966, 1292.23, 1225.13, 1154.976, 1085.7, 1019.096, 955.9163, 896.3805, 840.4509, 787.9765, 738.7678,
   692.6293, 649.3716, 608.8153, 570.7919, 535.1433, 470.3862, 413.4653, 363.4324, 319.4538, 280.7971, 246.8182, 216.951, 190.698, 167.6219, 147.3381, 113.8372,
   87.95352, 67.95513, 52.50386, 40.56582, 31.34219, 18.70972, 11.16877, 6.667199, 3.979985, 2.375853, 1.418265, 0.8466337, 0.5053981, 0.3016975, 0.1800983, 0.1075097,
   0.06417794, 0.03831103, 0.02286977, 0.01365211, 0.008149631, 0.004864923, 0.002904116, 0.001733613, 0.00103488, 0.0006177719, 0.000368779, 0.0002201427, 0.0001314142, 7.844771e-05, 4.682937e-05, 2.79548e-05,
   1.668762e-05, 9.961676e-06, 5.946624e-06, 3.549838e-06, 2.119076e-06, 2.119076e-06 };
   graph = new TGraph(119,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",119,-12,12);
   Graph_exp_np13->SetMinimum(1.514025);
   Graph_exp_np13->SetMaximum(1514.025);
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
   
   Double_t Fit_Total_fx14[108] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.4375, 0.5, 0.625, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[108] = { 2.009232, 2.129179, 2.262168, 2.409998, 2.574745, 2.758798, 2.964917, 3.196288, 3.456594, 3.750095, 4.081727, 4.45721, 4.883184, 5.367361, 5.918715, 6.547698, 7.266507,
   8.089399, 9.033071, 10.11713, 11.36467, 12.80297, 14.46441, 16.38763, 18.61899, 21.21465, 24.24327, 27.78995, 31.96201, 36.89779, 42.78095, 49.86502, 58.51924,
   69.32514, 83.3189, 102.7504, 134.0393, 201.4085, 274.9067, 419.0429, 543.897, 737.314, 1079.999, 1376.41, 1837.642, 2569.12, 3721.033, 5511.82, 8378.274,
   13609.94, 20876.19, 28021.56, 32059.92, 31037.55, 25691.78, 18748.76, 12830.04, 9308.019, 7060.433, 5578.07, 4596.88, 3933.573, 3463.708, 3108.417, 2821.355,
   2362.681, 1997.788, 1448.927, 1065.793, 793.8235, 598.5718, 353.6474, 220.6351, 145.7027, 101.7444, 74.77658, 57.41878, 45.68366, 37.36344, 31.20304, 26.46831,
   22.71626, 19.67031, 17.15139, 15.03904, 13.24899, 11.72012, 10.40647, 9.272492, 8.289984, 7.436097, 6.692039, 6.042159, 5.473302, 4.974336, 4.535785, 4.149558,
   3.808717, 3.507305, 3.240191, 3.002953, 2.791775, 2.603355, 2.434838, 2.283749, 2.147945, 2.025564, 2.025564 };
   graph = new TGraph(108,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",108,-12,12);
   Graph_Fit_Total14->SetMinimum(1.808309);
   Graph_Fit_Total14->SetMaximum(35265.71);
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
   
   TH1D *frame_tau_f625960__8 = new TH1D("frame_tau_f625960__8"," ",80,-10,10);
   frame_tau_f625960__8->SetBinContent(1,33662.92);
   frame_tau_f625960__8->SetMinimum(5);
   frame_tau_f625960__8->SetMaximum(500000);
   frame_tau_f625960__8->SetEntries(3);
   frame_tau_f625960__8->SetDirectory(nullptr);
   frame_tau_f625960__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f625960__8->SetLineColor(ci);
   frame_tau_f625960__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f625960__8->GetXaxis()->SetRange(25,56);
   frame_tau_f625960__8->GetXaxis()->SetLabelFont(42);
   frame_tau_f625960__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f625960__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f625960__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_f625960__8->GetXaxis()->SetTitleFont(42);
   frame_tau_f625960__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f625960__8->GetYaxis()->SetLabelFont(42);
   frame_tau_f625960__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f625960__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f625960__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_f625960__8->GetYaxis()->SetTitleFont(42);
   frame_tau_f625960__8->GetZaxis()->SetLabelFont(42);
   frame_tau_f625960__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_f625960__8->GetZaxis()->SetTitleFont(42);
   frame_tau_f625960__8->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"4 < #it{p}_{T}^{#mu#mu} < 5 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 25516#pm186");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 11906#pm145");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.145#pm0.004");
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
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 75 / 76 ");
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

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT4_5.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT4_5.png");
}
