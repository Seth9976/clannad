// 函数: sub_4b2210
// 地址: 0x4b2210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_20
int32_t var_14
int32_t var_10
int32_t var_c
int32_t eax_1
int32_t ebx
int32_t esi
int32_t edi

if (data_70305c != 1)
    eax_1 = data_1bffbf0
    ebx = data_1bffc24
    edi = data_1bffc58
    esi = data_1bffc8c
else
    sub_4b1d20(&var_14, &var_10, &var_c, &var_14, &var_20)
    esi = var_20
    edi = var_14
    ebx = var_10
    eax_1 = var_c

int32_t var_38_2 = 0xff
int32_t var_3c_2 = arg5
bool cond:1 = data_703050 == 0x27
int32_t var_40 = arg4
void* edx_1 = data_702fec
int32_t var_44 = arg2
var_14 = eax_1
int32_t eax_2 = 0xff

if (cond:1)
    eax_2 = 0xa0

int32_t ecx_1 = data_702fe8
int32_t var_4c = data_7030b0
var_20 = eax_2
sub_584e80(eax_2, edx_1, ecx_1, data_702ff0, data_976eb4, data_976eb8, data_976ebc, data_703098, 
    data_70309c, 0, data_7030ac, var_4c, arg3.b)
int32_t eax_3 = var_14
int32_t ecx_3 = data_7030ac + eax_3
var_c = eax_3 + data_7030b4
int32_t var_8 = data_7030b8 + ebx
var_14 = ecx_3
int32_t ecx_5 = data_7030b0 + ebx
var_10 = ecx_5
int32_t eax_8
int32_t ecx_7
eax_8, ecx_7 = sub_4d2220(&var_14, arg2, arg3, arg4, arg5, &var_14, &var_10, &var_c, &var_8)

if (eax_8 != 0)
    int32_t var_38_3 = 0
    int32_t var_3c_3 = var_20
    uint32_t eax_9 = zx.d(data_1bfe2cc.b)
    int32_t var_40_1 = 0
    int32_t var_44_1 = 0
    int32_t var_48_1 = 0
    sub_584980(eax_9, data_702fec, data_702fe8, data_702ff0, data_976e94, data_976e98, data_976e9c, 
        data_7030ac, data_7030b0, 0, ecx_3, ecx_5, var_14, var_10.b, var_c, var_8, ecx_7, 
        data_1bfe2a8, eax_9, 0, data_1bfe2ac, data_1bfe2b0, (data_1bfe2b4).b, (data_1bfe2b8).b, 0, 
        0, 0, 0, 0, 0, 0, nullptr)

int32_t ebx_1 = data_7030ac
var_14 = ebx_1 + edi
int32_t eax_12 = data_7030b0 + esi
var_10 = eax_12
var_c = data_7030b4 + edi
var_8 = data_7030b8 + esi
void* result
int32_t ecx_10
result, ecx_10 = sub_4d2220(&var_14, arg2, arg3, arg4, arg5, &var_14, &var_10, &var_c, &var_8)

if (result == 0)
    return result

int32_t var_38_5 = 0
int32_t var_3c_5 = var_20
int32_t var_40_3 = 0
int32_t var_44_3 = 0
int32_t var_48_3 = 0
int32_t eax_19 = ebx_1 + edi
return sub_584980(eax_19, data_702fec, data_702fe8, data_702ff0, data_976e94, data_976e98, 
    data_976e9c, ebx_1, data_7030b0, 0, eax_19, eax_12, var_14, var_10.b, var_c, var_8, ecx_10, 
    data_1bfe2a8, zx.d(data_1bfe2cc.b), 0, data_1bfe2ac, data_1bfe2b0, (data_1bfe2b4).b, 
    (data_1bfe2b8).b, 1, 0, 0, 0, 0, 0, 0, nullptr)
