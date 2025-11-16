// 函数: sub_4b1810
// 地址: 0x4b1810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bffcc0
int32_t eax_1 = data_1bffcf4
int32_t eax_2 = data_1bffd28
int32_t esi = data_1bff87c
int32_t var_c = data_1bffd5c
int32_t eax_4 = data_1bffd90
int32_t var_8 = eax_4

if (esi s<= 0xff)
    eax_4 = 0
    
    if (esi s< 0)
        esi = 0
else
    esi = 0xff

int32_t var_60 = 0xff
void* var_64 = arg5
double* var_68 = arg4
int32_t var_6c = arg2
sub_584e80(eax_4, data_702fec, data_702fe8, data_702ff0, data_976eb4, data_976eb8, data_976ebc, 
    data_703098, data_70309c, 0, data_7030ac, data_7030b0, arg3.b)
int32_t eax_5 = data_703050
int32_t ebx = data_7030b8
void* edi = data_7030b4
void* edx_1 = data_7030ac
int32_t ecx_1 = data_7030b0
int32_t var_10 = ebx
void* var_14 = edi

if (eax_5 == 0x105)
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(edi - edx_1)
    edi = ((eax_8 - edx_2) s>> 1) + edx_1
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = sx.q(ebx - ecx_1)
    ebx = ((eax_12 - edx_3) s>> 1) + ecx_1
else if (eax_5 != 0x10e)
    int32_t eax_24
    int32_t edx_4
    edx_4:eax_24 = sx.q(edi - edx_1)
    edi = edx_1 + ((eax_24 - edx_4) s>> 1)
    var_c = edi
    int32_t eax_29
    int32_t edx_5
    edx_5:eax_29 = sx.q(ebx - ecx_1)
    ebx = ((eax_29 - edx_5) s>> 1) + ecx_1
    var_8 = ebx
else
    int32_t eax_14 = data_703058
    
    if (eax_14 == 0)
        edi = edx_1
        var_c = edx_1
        ebx = ecx_1
        var_8 = ecx_1
    else if (eax_14 == 1)
        var_8 = ecx_1
        ebx = ecx_1
        var_c = edi
    else if (eax_14 == 2)
        var_c = edx_1
        edi = edx_1
        var_8 = ebx
    else
        var_c = edi
        var_8 = ebx

int32_t ecx_2 = data_702fe8
int32_t edx_6 = data_702ff0
int32_t eax_32 = data_702fec
int32_t ecx_3 = data_976e9c
int32_t* ecx_4 = data_976e98
int32_t ecx_5 = data_976e94
int32_t ecx_6 = ecx_1
int32_t var_28 = eax_32
char var_20 = 0

if (data_108feb4 != 0 && data_137475c != 0 && data_704894 != 0)
    if (data_20f33d9 != 0)
        eax_32.b = data_20f33d8
    else
        eax_32 = sub_45dee0(ecx_6)
        ecx_6 = ecx_1
        data_20f33d8 = eax_32.b
        data_20f33d9 = 1
    
    var_20 = eax_32.b
    eax_32 = var_28

int32_t var_60_1 = 0
int32_t result = sub_58e290(eax_32, ecx_4, ecx_5, ecx_3, edx_1, ecx_6, var_14, var_10, edi, ebx, 
    ecx_6, ecx_2, eax_32, edx_6, var_c, var_8, arg3, arg2, arg4, arg5, eax, eax_1, eax_2, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, esi, 0, var_20.d, nullptr, nullptr, nullptr, 
    0)
return result
