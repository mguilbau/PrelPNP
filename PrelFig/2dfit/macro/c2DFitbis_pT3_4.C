#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT3_4()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Tue Apr  1 10:47:35 2025) by ROOT version 6.32.06
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
   pad1_2DFitbis__3->Range(-6.25,0.07396996,6.25,6.32397);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_10e7b6f0__7 = new TH1D("frame_tau_10e7b6f0__7"," ",80,-10,10);
   frame_tau_10e7b6f0__7->SetBinContent(1,51470.94);
   frame_tau_10e7b6f0__7->SetMinimum(5);
   frame_tau_10e7b6f0__7->SetMaximum(500000);
   frame_tau_10e7b6f0__7->SetEntries(3);
   frame_tau_10e7b6f0__7->SetDirectory(nullptr);
   frame_tau_10e7b6f0__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_10e7b6f0__7->SetLineColor(ci);
   frame_tau_10e7b6f0__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10e7b6f0__7->GetXaxis()->SetRange(21,60);
   frame_tau_10e7b6f0__7->GetXaxis()->SetLabelFont(42);
   frame_tau_10e7b6f0__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10e7b6f0__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10e7b6f0__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_10e7b6f0__7->GetXaxis()->SetTitleFont(42);
   frame_tau_10e7b6f0__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10e7b6f0__7->GetYaxis()->SetLabelFont(42);
   frame_tau_10e7b6f0__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10e7b6f0__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10e7b6f0__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10e7b6f0__7->GetYaxis()->SetTitleFont(42);
   frame_tau_10e7b6f0__7->GetZaxis()->SetLabelFont(42);
   frame_tau_10e7b6f0__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_10e7b6f0__7->GetZaxis()->SetTitleFont(42);
   frame_tau_10e7b6f0__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 6, 5, 7, 5, 5, 9, 17, 10, 8, 12, 13, 16, 16, 10, 23, 11, 15,
   26, 22, 27, 21, 32, 35, 34, 44, 35, 65, 53, 54, 62, 92, 118, 108,
   149, 181, 236, 315, 572, 1753, 20439, 26469, 5001, 2262, 1255, 734, 504, 306, 255, 154,
   130, 108, 83, 75, 61, 49, 42, 29, 38, 33, 31, 25, 30, 27, 18, 14,
   12, 16, 18, 7, 10, 10, 10, 6, 7, 8, 8, 8, 5, 6, 2 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 2.379931, 2.159691, 2.58147, 2.159691, 2.159691, 2.943461, 4.082184, 3.108694, 2.768386, 3.415266, 3.558662, 3.957801, 3.957801, 3.108694, 4.760717, 3.265579, 3.82938,
   5.066015, 4.654502, 5.163771, 4.545807, 5.627135, 5.887675, 5.802128, 6.60794, 5.887675, 8.041463, 7.257065, 7.32564, 7.852713, 9.574201, 10.37428, 9.904326,
   11.71679, 12.96291, 14.87043, 17.25528, 23.42175, 41.37183, 142.4659, 162.1937, 70.21952, 47.06312, 34.92951, 26.59705, 21.95551, 17, 15.47655, 11.91974,
   10.91271, 9.904326, 9.092044, 8.640903, 7.788779, 6.976026, 6.454831, 5.353932, 6.137163, 5.715302, 5.537565, 4.966335, 5.446522, 5.163771, 4.202887, 3.6965,
   3.415266, 3.957801, 4.202887, 2.58147, 3.108694, 3.108694, 3.108694, 2.379931, 2.58147, 2.768386, 2.768386, 2.768386, 2.159691, 2.379931, 1.291815 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 3.583642, 3.382473, 3.770281, 3.382473, 3.382473, 4.110204, 5.203719, 4.26695, 3.945142, 4.559819, 4.697573, 5.083066, 5.083066, 4.26695, 5.865235, 4.416521, 4.958738,
   6.164324, 5.761366, 6.260244, 5.655182, 6.715753, 6.97241, 6.888101, 7.68351, 6.97241, 9.103628, 8.325916, 8.39385, 8.916365, 10.62644, 11.37428, 10.90433,
   12.71679, 13.96291, 15.87043, 18.25528, 24.42175, 42.37183, 143.4659, 163.1937, 71.21952, 48.06312, 35.92951, 27.59705, 22.95551, 18, 16.47655, 12.91974,
   11.91271, 10.90433, 10.14705, 9.698771, 8.852952, 8.047634, 7.53218, 6.44702, 7.218484, 6.802567, 6.627601, 6.066589, 6.538046, 6.260244, 5.321007, 4.830381,
   4.559819, 5.083066, 5.321007, 3.770281, 4.26695, 4.26695, 4.26695, 3.583642, 3.770281, 3.945142, 3.945142, 3.945142, 3.382473, 3.583642, 2.63786 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(0.6373669);
   Graph_h_data3004->SetMaximum(29295.34);
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
   
   Double_t model2_fx11[117] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25,
   1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t model2_fy11[117] = { 1.008123, 1.159473, 1.333546, 1.533752, 1.764016, 2.028849, 2.333442, 2.683764, 3.08668, 3.550086, 4.083064, 4.696058, 5.401082, 6.211951, 7.144558, 8.217177, 9.450829,
   10.86969, 12.50157, 14.37844, 16.53709, 19.01982, 21.87528, 25.15944, 28.93665, 33.28093, 38.27743, 44.02405, 50.63343, 58.23509, 66.97811, 77.03435, 88.60413,
   101.9338, 117.4027, 136.0269, 162.4726, 223.2072, 301.513, 370.8804, 475.9837, 637.0217, 747.8768, 886.0113, 1058.575, 1274.755, 1546.304, 1887.938, 2317.307,
   2854.373, 3521.361, 4347.347, 5380.216, 6685.221, 8268.762, 9909.036, 11080.65, 11238.52, 10302, 8759.594, 7233.912, 6045.808, 5191.107, 4552.536, 4041.451,
   3615.228, 3253.358, 2942.141, 2670.72, 2430.783, 2216.391, 2023.437, 1691.053, 1417.754, 1192.565, 1006.831, 853.4938, 726.7644, 534.9851, 402.8369, 311.0227,
   200.6403, 142.8549, 109.9025, 89.07977, 74.51944, 63.46446, 54.57909, 47.18251, 40.90038, 35.5057, 30.84575, 26.8079, 23.30339, 20.25916, 17.6136, 15.31395,
   13.31474, 11.57662, 10.06544, 8.751536, 7.609156, 6.6159, 5.7523, 5.001429, 4.348574, 3.780938, 3.287398, 2.858281, 2.485179, 2.160779, 1.878724, 1.633487,
   1.420262, 1.23487, 1.073678, 1.073678 };
   TGraph *graph = new TGraph(117,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",117,-12,12);
   Graph_model211->SetMinimum(0.9073104);
   Graph_model211->SetMaximum(12362.28);
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
   
   Double_t tausigModel_fx12[105] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.4375,
   0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25,
   4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25,
   8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t tausigModel_fy12[105] = { 3.792726, 3.931509, 4.079194, 4.236611, 4.404694, 4.584494, 4.777201, 4.984165, 5.206925, 5.447243, 5.70714, 5.988954, 6.295392, 6.629613, 6.995316, 7.396868, 7.839449,
   8.329251, 8.873728, 9.481932, 10.16495, 10.93649, 11.81371, 12.81831, 13.97813, 15.32939, 16.92006, 18.8149, 21.10322, 23.91144, 27.42393, 31.91938, 37.83765,
   45.91128, 57.44657, 74.99255, 104.1855, 160.0422, 298.1807, 522.1484, 666.9876, 912.6148, 1330.068, 2019.509, 3105.337, 4724.907, 7034.536, 10343.63, 16036.4,
   24905.91, 33656.68, 37957.59, 35191.94, 27074.9, 17907.49, 11334.43, 7687.334, 5188.034, 3425.275, 2229.182, 1460.289, 990.2011, 712.4151, 549.234, 385.8886,
   305.2054, 162.3779, 105.3039, 75.62926, 57.84995, 46.18613, 38.03505, 32.06695, 27.53776, 24.00148, 21.17594, 18.87466, 16.96991, 15.37149, 14.01409, 12.84933,
   11.84069, 10.96013, 10.18581, 9.500456, 8.890268, 8.344095, 7.852833, 7.408987, 7.006332, 6.639663, 6.304593, 5.997402, 5.714921, 5.454427, 5.213577, 4.990338,
   4.782943, 4.589846, 4.409692, 4.241288, 4.083577, 3.935624, 3.796597, 3.796597 };
   graph = new TGraph(105,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",105,-12,12);
   Graph_tausigModel12->SetMinimum(3.413454);
   Graph_tausigModel12->SetMaximum(41752.97);
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
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875,
   0.5, 0.53125, 0.5625, 0.59375, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375,
   1.5, 1.625, 1.75, 1.875, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_np_fy13[119] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.389257e-300, 7.057262e-266, 1.23684e-233, 1.825423e-203, 2.270192e-175, 2.380964e-149, 2.107966e-125, 1.577411e-103, 9.993433e-84, 5.372033e-66,
   2.457845e-50, 9.613714e-37, 3.236488e-25, 9.480676e-16, 2.463631e-08, 0.005904263, 0.511272, 3.111688, 6.91724, 14.37207, 28.02106, 51.76386, 92.31048, 162.6775, 286.0242, 491.2209,
   790.8937, 1153.315, 1502.874, 1762.801, 1901.144, 1935.513, 1903.646, 1836.966, 1753.761, 1663.441, 1480.172, 1392.266, 1308.473, 1229.199, 1154.498, 1084.245,
   1018.233, 956.2277, 897.9947, 843.3069, 791.9492, 698.4264, 615.9479, 543.2094, 479.0607, 422.4875, 372.5951, 328.5946, 289.7902, 255.5683, 225.3878, 175.298,
   136.3401, 106.0401, 82.47393, 64.14507, 49.88958, 30.17887, 18.2556, 11.04306, 6.680094, 4.040878, 2.444381, 1.478639, 0.8944484, 0.5410638, 0.3272967, 0.1979861,
   0.1197645, 0.07244713, 0.04382423, 0.02650987, 0.01603617, 0.009700495, 0.005867959, 0.003549607, 0.002147205, 0.001298873, 0.0007857055, 0.0004752837, 0.0002875055, 0.0001739159, 0.0001052041, 6.363934e-05,
   3.849629e-05, 2.328692e-05, 1.408657e-05, 8.521153e-06, 5.154559e-06, 5.154559e-06 };
   graph = new TGraph(119,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",119,-12,12);
   Graph_exp_np13->SetMinimum(2.129064);
   Graph_exp_np13->SetMaximum(2129.064);
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
   
   Double_t Fit_Total_fx14[109] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.4375, 0.5, 0.625, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25,
   3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25,
   7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[109] = { 4.800849, 5.090982, 5.412739, 5.770364, 6.16871, 6.613344, 7.110643, 7.667929, 8.293605, 8.997329, 9.790205, 10.68501, 11.69647, 12.84156, 14.13987, 15.61404, 17.29028,
   19.19894, 21.3753, 23.86037, 26.70204, 29.95631, 33.68899, 37.97775, 42.91477, 48.61032, 55.19749, 62.83895, 71.73665, 82.14653, 94.40204, 108.9537, 126.4418,
   147.8451, 174.8493, 211.0195, 266.658, 383.2495, 512.4511, 774.1703, 1011.21, 1408.671, 1726.869, 2190.482, 2883.289, 3921.82, 5450.665, 7631.044, 10648.21,
   14853.66, 21702.64, 32082.35, 42716.33, 49019.94, 47775.46, 40076.22, 30110.63, 22029.54, 16824.89, 13070.81, 10370.14, 8445.159, 7072.934, 6085.601, 5358.039,
   4799.848, 3971.169, 3346.876, 2424.395, 1785.157, 1334.445, 1012.884, 612.0397, 394.8304, 271.5149, 197.8271, 151.3256, 120.3128, 98.509, 82.43512, 70.09805,
   60.31467, 52.35583, 45.75429, 40.19829, 35.47137, 31.41728, 27.91917, 24.88685, 22.24883, 19.94722, 17.9343, 16.17022, 14.62136, 13.25911, 12.05904, 11.00013,
   10.06428, 9.23584, 8.501262, 7.848793, 7.268227, 6.750689, 6.288455, 5.874798, 5.503853, 5.170503, 4.87028, 4.87028 };
   graph = new TGraph(109,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",109,-12,12);
   Graph_Fit_Total14->SetMinimum(4.320764);
   Graph_Fit_Total14->SetMaximum(53921.46);
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
   
   TH1D *frame_tau_10e7b6f0__8 = new TH1D("frame_tau_10e7b6f0__8"," ",80,-10,10);
   frame_tau_10e7b6f0__8->SetBinContent(1,51470.94);
   frame_tau_10e7b6f0__8->SetMinimum(5);
   frame_tau_10e7b6f0__8->SetMaximum(500000);
   frame_tau_10e7b6f0__8->SetEntries(3);
   frame_tau_10e7b6f0__8->SetDirectory(nullptr);
   frame_tau_10e7b6f0__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_10e7b6f0__8->SetLineColor(ci);
   frame_tau_10e7b6f0__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10e7b6f0__8->GetXaxis()->SetRange(21,60);
   frame_tau_10e7b6f0__8->GetXaxis()->SetLabelFont(42);
   frame_tau_10e7b6f0__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10e7b6f0__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10e7b6f0__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_10e7b6f0__8->GetXaxis()->SetTitleFont(42);
   frame_tau_10e7b6f0__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10e7b6f0__8->GetYaxis()->SetLabelFont(42);
   frame_tau_10e7b6f0__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10e7b6f0__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10e7b6f0__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10e7b6f0__8->GetYaxis()->SetTitleFont(42);
   frame_tau_10e7b6f0__8->GetZaxis()->SetLabelFont(42);
   frame_tau_10e7b6f0__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_10e7b6f0__8->GetZaxis()->SetTitleFont(42);
   frame_tau_10e7b6f0__8->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"3 < #it{p}_{T}^{#mu#mu} < 4 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 39747#pm241");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 22780#pm203");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.136#pm0.003");
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
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 136 / 78 ");
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

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT3_4.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT3_4.png");
}