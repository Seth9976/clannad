// 函数: _GetTableIndexFromLcid
// 地址: 0x755059
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
int32_t esi = 0xe3

do
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(esi + ecx)
    int32_t result = (eax_2 - edx_1) s>> 1
    
    if (arg1 == *((result << 3) + &data_aafb00))
        return result
    
    if (arg1 - *((result << 3) + &data_aafb00) s>= 0)
        ecx = result + 1
    else
        esi = result - 1
while (ecx s<= esi)

return 0xffffffff
