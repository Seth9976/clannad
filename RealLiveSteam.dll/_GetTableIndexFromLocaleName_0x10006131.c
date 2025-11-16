// 函数: _GetTableIndexFromLocaleName
// 地址: 0x10006131
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t edi = 0
int32_t ebx = 0xe3

do
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(ebx + edi)
    int32_t esi_2 = (eax_2 - edx_1) s>> 1
    uint32_t eax_4 = sub_100061f5(arg1, (&data_10011888)[esi_2 * 2], 0x55)
    
    if (eax_4 == 0)
        return *((esi_2 << 3) + &data_1001188c)
    
    if (eax_4 s>= 0)
        edi = esi_2 + 1
    else
        ebx = esi_2 - 1
while (edi s<= ebx)

return 0xffffffff
