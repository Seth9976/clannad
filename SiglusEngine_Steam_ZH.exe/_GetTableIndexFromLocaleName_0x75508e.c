// 函数: _GetTableIndexFromLocaleName
// 地址: 0x75508e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0
int32_t ebx = 0xe3

do
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(ebx + edi)
    int32_t esi_2 = (eax_2 - edx_1) s>> 1
    uint32_t eax_4 = sub_7552f0(arg1, (&data_ab0220)[esi_2 * 2], 0x55)
    
    if (eax_4 == 0)
        return *((esi_2 << 3) + &data_ab0224)
    
    if (eax_4 s>= 0)
        edi = esi_2 + 1
    else
        ebx = esi_2 - 1
while (edi s<= ebx)

return 0xffffffff
