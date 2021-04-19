sort -k1 -n annotation.tab > sorted_annotation.tab
sort -k1 -n expression.tab > sorted_expression.tab
join -t$'\t' -1 1 -2 1 -o 1.1,2.2,1.2,2.3 sorted_expression.tab sorted_annotation.tab > join.tab
