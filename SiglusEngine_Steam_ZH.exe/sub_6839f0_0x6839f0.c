// 函数: sub_6839f0
// 地址: 0x6839f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = data_bac4d0
int32_t esi = 0
int32_t result = edi[1] - *edi

if ((result & 0xfffffffc) s> 0)
    do
        (*(**(*edi + (esi << 2)) + 0x14))()
        esi += 1
        result = (edi[1] - *edi) s>> 2
    while (esi s< result)

return result
