// 函数: sub_4ec540
// 地址: 0x4ec540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_703680
int32_t result_1 = data_1af4260

if (result != 0)
    if (data_703684 != 0 || data_1af425c != 0)
        result_1 = result
    else if (result s> result_1)
        result_1 = result

int32_t esi = data_131310c
int32_t edx_2 = data_1b8add0 * result_1 - esi
int32_t edx_3 = edx_2 + data_1bfe02c

if (edx_2 + data_1bfe02c s>= 0)
    data_1bfe02c = esi
    data_1b8add0 = 0
    
    if (result_1 s> 0xa)
        int32_t eax = data_1392710
        data_107f108 = 0
        data_107f100 = eax
        
        if (edx_3 u>= result_1)
            data_107f104 = result_1
            result = esi + result_1
        else
            data_107f104 = edx_3
            result = esi + edx_3
        
        data_1bfe02c = result
        data_71929c = 0x12
    else
        data_71929c = 5
    
    data_7192e0 = 0
    data_7192a0 = 0

return result
