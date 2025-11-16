// 函数: sub_494360
// 地址: 0x494360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0x270f
void* esi = &data_1b8c89c
int32_t result_1 = 0x270f
int32_t i

do
    if (*(esi - 0xc) != 0)
        uint32_t edi_1 = *(esi + 0x10)
        sub_4d1c30(sub_4d6960(result, esi, esi - 4, edi_1, "AVG_READ_FLAG_PUSH"), *(esi - 8), *esi, 
            edi_1)
        result = result_1
    
    esi += 0x24
    i = result
    result -= 1
    result_1 = result
while (i != 1)
return result
