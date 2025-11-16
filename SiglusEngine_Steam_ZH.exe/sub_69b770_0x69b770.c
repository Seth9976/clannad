// 函数: sub_69b770
// 地址: 0x69b770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

data_bac3e8 = data_af2600
bool cond:0_1 = data_bac51c == 0
int32_t* esi_1 = &data_bac51c
data_4ebe378 = &data_bac51c

if (not(cond:0_1))
    bool cond:1_1
    
    do
        esi_1[8](1)
        cond:1_1 = esi_1[9] != 0
        esi_1 = &esi_1[9]
    while (cond:1_1)

int32_t* i = data_4ecd158

for (int32_t ecx = data_4ecd15c; i u< ecx; i = &i[1])
    void* eax_2 = *i
    
    if (eax_2 != 0)
        (*(eax_2 + 0x1c))(1)
        ecx = data_4ecd15c

return 0
