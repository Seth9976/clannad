// 函数: sub_57f650
// 地址: 0x57f650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = arg3

if (data_1311174 != 0)
    data_1311174 = 0
    sub_57fb20()
    arg3 = var_10

if (arg3 u> 0x3f)
    return 

arg1 = arg3 * 0x3920 + &data_f89afc
char* esi_2 = arg3 * 0x2d0 + &data_8fcadc

if (arg1[4] s< 0 || arg1[5] s< 0)
    return 

int32_t eax_1 = *(esi_2 + 0x28)
int32_t var_c_1 = eax_1
int32_t eax_2 = data_1313c88

if (eax_1 == 0xffffffff || eax_2 == 0)
    var_c_1 = *(esi_2 + 0xc)
    eax_2 = data_1313c88

int32_t edi_1 = 0xffffffff

if (*(arg3 * 0x1d4 + 0x1090c08) != 0)
    edi_1 = *(esi_2 + 0x2c)
    
    if (edi_1 == 0xffffffff || eax_2 == 0)
        edi_1 = *(esi_2 + 0x10)

int32_t edx_2
edx_2.b = arg4 != 0
int32_t edx_3 = edx_2 + 1
int32_t var_18_1 = edx_3
char* var_8_1

if (arg4 == 0)
    var_8_1 = nullptr
else if (var_c_1 u> 0xff)
    var_8_1 = &data_12a2990
else
    var_8_1 = &(&data_12a2990)[var_c_1 * 2]

char* eax_7

if (data_131923c != 0 || edi_1 u> 0xff)
    eax_7 = nullptr
else
    eax_7 = &(&data_12a2990)[edi_1 * 2]

if (arg8 != 0)
    sub_45e0d0(eax_7, arg2, &arg1[8], *esi_2, *(esi_2 + 0x30), *(esi_2 + 0x34), var_8_1, eax_7, 
        arg6, arg7)
    arg3 = var_10
    edx_3 = var_18_1

if (arg9 != 0)
    char edi_2 = arg2.b
    uint32_t eax_9 = zx.d(*(esi_2 + 0x34))
    char var_44_1 = edx_3.b
    edx_3.w = *(esi_2 + 0x30)
    sub_5804f0(eax_9, edx_3.w, arg3, eax_9.w, var_44_1, *esi_2, 0, edi_2, var_c_1.w, edi_1.w, arg6, 
        arg7)
    
    if (arg5 != 0)
        uint32_t eax_10 = zx.d(*esi_2)
        sub_4200a0(eax_10, var_18_1.b, var_10, eax_10.b, 0, edi_2)

*(esi_2 + 0x30) += arg1[0xdfc]
