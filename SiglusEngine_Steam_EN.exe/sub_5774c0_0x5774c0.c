// 函数: sub_5774c0
// 地址: 0x5774c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

sub_57e4a0(arg1, 0x62458c)
void* eax_1 = arg1 * 0x3920
void* edx_1 = arg1 * 0x2d0
int32_t esi_1 = *(eax_1 + 0xf89b34)
void* edi_1 = eax_1 + &data_f89afc
int32_t eax_3 = *(edi_1 + 0x34)
int32_t edx_2

if (*(edx_1 + 0x8fcd90) != 0)
    edx_2 = *(edx_1 + &data_8fcd8c)
else
    edx_2 = data_1313290

if (edx_2 s< 0 || edx_2 s>= 8)
    edx_2 = 0

int32_t ecx_2 = *(arg1 * 0x1d4 + &data_1090b58)

if (ecx_2 != 0xffffffff)
    if (*((ecx_2 << 2) + &data_12997e4) != 5)
        void var_34
        sub_576db0(eax_3, edx_2, ecx_2, *(edx_1 + 0x8fcd80), *(edx_1 + 0x8fcd84), eax_3, esi_1, 
            &var_34)
        int32_t var_20
        esi_1 = var_20
        int32_t var_24
        eax_3 = var_24
    else
        int32_t edx_3 = *((ecx_2 << 2) + &data_1bffec0)
        
        if (edx_3 != 0xffffffff)
            int32_t ecx_3 = *((ecx_2 << 2) + &data_1bffdc0)
            
            if (ecx_3 != 0xffffffff)
                eax_3 = edx_3
                esi_1 = ecx_3

*(edi_1 + 0x494) = eax_3
*(edi_1 + 0x498) = esi_1
sub_57e420(edi_1)
