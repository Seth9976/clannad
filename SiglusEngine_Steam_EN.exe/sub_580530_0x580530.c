// 函数: sub_580530
// 地址: 0x580530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* i = &data_f8d364
int32_t ecx = 0

do
    int32_t edx_1
    
    if (ecx u> 0x3f)
        edx_1 = 0
    else
        edx_1 = *i
    
    i += 0x3920
    result += edx_1
    ecx += 1
while (i s< 0x1071b64)

return result
