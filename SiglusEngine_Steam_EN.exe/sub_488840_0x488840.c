// 函数: sub_488840
// 地址: 0x488840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg2
ebx:1.b = arg1

if (data_1372c24.b == 0 || data_1372c24:1.b == 0 || data_1372c20 u> 7)
    return 

for (void* const i = &data_610990; i s< &data_6109d0; i += 4)
    int32_t edx = *i
    
    if (ebx:1.b != 0)
    label_48887c:
        
        if (sub_4887c0(nullptr, edx) != 0)
            break
    else if (ebx.b != 0 && (edx == 0xd || edx == 0xe))
        goto label_48887c
