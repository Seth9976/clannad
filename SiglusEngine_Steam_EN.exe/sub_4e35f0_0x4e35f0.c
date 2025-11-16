// 函数: sub_4e35f0
// 地址: 0x4e35f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_20f33e8 = data_61d6a0
bool cond:0_1 = data_1b1bce4 == 0
int32_t* esi_1 = &data_1b1bce4
data_1cd4548 = &data_1b1bce4

if (not(cond:0_1))
    bool cond:1_1
    
    do
        esi_1[8](1)
        cond:1_1 = esi_1[9] != 0
        esi_1 = &esi_1[9]
    while (cond:1_1)

int32_t* i = data_20f3468

for (int32_t ecx = data_20f346c; i u< ecx; i = &i[1])
    void* eax_2 = *i
    
    if (eax_2 != 0)
        (*(eax_2 + 0x1c))(1)
        ecx = data_20f346c

return 0
