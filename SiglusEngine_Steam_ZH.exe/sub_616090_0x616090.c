// 函数: sub_616090
// 地址: 0x616090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
void* edx = data_bac4a0

if (*(edx + 0x74) != 0)
    return 

int32_t* ecx_1 = data_bac4e4
int32_t esi_1 = ecx_1[1]

if (*ecx_1 == esi_1 && ecx_1[2] == *(edx + 0x48) && ecx_1[3] == *(edx + 0x4c))
    return 

*ecx_1 = esi_1
ecx_1.b = 1

if (sub_614c70(ecx_1.b).b == 0)
    return 

int32_t eax_3 = *data_bac4e4

if (eax_3 == 0)
    sub_6152f0(nullptr, 0)
else if (eax_3 == 2)
    sub_615520(nullptr, 0)
    sub_614e40()
    data_bac400 -= 1
    return 

sub_614e40()
data_bac400 -= 1
