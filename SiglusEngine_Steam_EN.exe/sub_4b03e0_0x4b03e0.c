// 函数: sub_4b03e0
// 地址: 0x4b03e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_esi = 0xff
int32_t __saved_edi = arg5
int32_t var_20 = arg4
int32_t var_24 = arg2
sub_584e80(arg2, data_702fec, data_702fe8, data_702ff0, data_976e94, data_976e98, data_976e9c, 0, 
    0, 0, 0, 0, arg3.b)
int32_t eax_1 = data_1bff87c

if (eax_1 s> 0xff)
    eax_1 = 0xff
else if (eax_1 s< 0)
    eax_1 = 0

int32_t edx_1 = data_1bff980
int32_t esi = data_1bfe2cc
int32_t var_c = data_1bfe2a8
int32_t var_8 = data_1bfe2ac
int32_t edi = 0
int32_t ecx_5

if (data_1bfe2a8 == 0)
    ecx_5 = data_1bfe2b0
else
    int32_t ecx_4 = data_1bfe2d4
    
    if (ecx_4 == 1)
        edx_1 = 0
        edi = 0x63
        esi = 0
        ecx_5 = data_1bfe2b0
    else if (ecx_4 != 2)
        ecx_5 = data_1bfe2b0
    else
        int32_t ecx_7 = data_1bfe2c0
        
        if (ecx_7 == 0)
            ecx_5 = data_1bfe2b0
        else
            var_c = ecx_7
            edx_1 = 0
            esi = 0
            var_8 = data_1bfe2c4
            edi = 0
            ecx_5 = data_1bfe2c8
            eax_1 = 0xff

int32_t var_20_1 = edi
int32_t var_24_1 = eax_1
int32_t var_28_1 = 0
int32_t var_2c = 0
int32_t var_30 = 0
void* result = sub_584980(eax_1, data_702fec, data_702fe8, data_702ff0, data_976eb4, data_976eb8, 
    data_976ebc, data_703098, data_70309c, 0, data_7030ac, data_7030b0, arg3, arg2.b, arg4, arg5, 
    ecx_5, var_c, esi, edx_1, var_8, ecx_5, (data_1bfe2b4).b, (data_1bfe2b8).b, (data_1bfe2d0).b, 
    0, 0, 0, 0, 0, 0, nullptr)
return result
