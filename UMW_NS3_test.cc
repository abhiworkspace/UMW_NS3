/*Snippet#2*/
#include<iostream>
using namespace ns3;
int main()

{
if(Simulate_Phy_Q == 1)
	{	
	struct Phy_Q()
		{
			int pkt_idx = 0;
			int time_stmp = 0;
			int tree = zeros(n-1, 2, 1);
			int Q_length = 0;
			int added = [];
		}	

	struct deleted_packet_str()

		{
			int pkt_idx = -1;
			int time_stmp = -1;
			int tree = zeros(n-1, 2);
		}
	
	struct null_packet()
		{
			int pkt_idx = -1;
			int time_stmp = -1;
			int tree = zeros(n-1, 2);
		}	

	for (i=0; i<m; i++)
		{
			Phy_Q(i).pkt_idx(1);
			deleted_packet_struct(i).pkt_idx = -1;
			Phy_Q(i).time_stamp(1) = 0;
			deleted_packet_struct(i).time_stamp = -1;
			Phy_Q(i).tree(;, :, 1) = zeros(n-1, 2);
			deleted_packet_struct(i).tree = zeros(n-1, 2);
			Phy_Q(i).Q_length= 0; /*Length og Physical Queue*/
			Phy_Q(i).added = [];
		}

	int avg_Phy_Q_length = zeros(1, T);
	int sum_Phy_Q_length = 0;
	}
	
	for(t = 0; t < int(T); t++)
		{
			a = poissrnd(lambda); /*Arrival to source*/
		
			Q_var = zeros(1, m);
			if(heuristic == 0)
				int Q_var = Q;
			else
				for i = 1:m
				Q_var(i) = Phy_Q(i).Q_len;
		}		
	if (strcmp(problem, 'broadcast') == 1)
		/*MST by Krushkal's algo*/
	elseif(strcmp(problem, 'unicast') == 1)
		/*Dijkshtra*/
	[dist, path, pred] = graphshortest(G, 1, dest, 'Weights', Q_var, 'directed' = True)
	ST(i, :) = -ones(n-1, 2);
	path_length = size(path);
	path_length = path_length(1, 2)-1;
	for (int i=0; i<path_length; i++)
	ST(i, :) = E(edge_idx_path, :);
	
}
