// 函数: sub_733f60
// 地址: 0x733f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* ebx = (*arg1[1])(arg1, 1, arg2 << 5)
*ebx = 0
ebx[1] = 0x1f
ebx[2] = 0
ebx[3] = 0x3f
ebx[4] = 0
ebx[5] = 0x1f
int32_t* eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_7338a0(arg1, ebx)
int32_t var_18_1 = arg2
int32_t eax_5 = sub_733c90(eax_4, ebx, arg1, ecx_1)
int32_t ecx_3 = eax_5
char* esi_1 = nullptr
int32_t var_8_2 = ecx_3

if (ecx_3 s> 0)
    do
        eax_5 = sub_733e00(eax_5, ebx, arg1, esi_1)
        ecx_3 = var_8_2
        esi_1 = &esi_1[1]
        ebx = &ebx[8]
    while (esi_1 s< ecx_3)

void* eax_6 = *arg1
arg1[0x1c] = ecx_3
*(eax_6 + 0x14) = 0x62
*(*arg1 + 0x18) = ecx_3
return (*(*arg1 + 4))(arg1, 1)
