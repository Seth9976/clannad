// 函数: sub_4ba860
// 地址: 0x4ba860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_20740e4 = data_131310c
void* i = &data_63e748
void* esi = &data_20740fc
int32_t result

do
    int32_t ecx_1 = *(i - 4)
    *(esi - 8) = *(i - 8)
    int32_t eax_2 = *i
    *(esi - 4) = ecx_1
    *(esi - 0x14) = ecx_1
    *esi = eax_2
    *(esi + 4) = 0
    *(esi + 8) = 0x1f4
    *(esi + 0xc) = 0
    *(esi + 0x10) = 0
    *(esi + 0x14) = 0
    *(esi + 0x18) = 0x28
    *(esi + 0x1c) = 0
    *(esi + 0x20) = 0
    *(esi + 0x24) = 0x1f4
    *(esi + 0x28) = 0
    *(esi + 0x2c) = 0
    *(esi + 0x30) = 0
    int32_t eax_4 = sub_4d18c0(2) & 1
    *(esi - 0xc) = eax_4
    int32_t eax_5 = *(esi - 4)
    
    if (eax_4 != 0)
        eax_5 = neg.d(eax_5)
    
    int32_t ecx_2 = *(i - 4)
    *(esi - 0x10) = eax_5
    *(esi + 0x40) = *(i - 8)
    int32_t eax_7 = *i
    *(esi + 0x44) = ecx_2
    *(esi + 0x34) = ecx_2
    *(esi + 0x48) = eax_7
    *(esi + 0x4c) = 0
    *(esi + 0x50) = 0x1f4
    *(esi + 0x54) = 0
    *(esi + 0x58) = 0
    *(esi + 0x5c) = 0
    *(esi + 0x60) = 0x28
    *(esi + 0x64) = 0
    *(esi + 0x68) = 0
    *(esi + 0x6c) = 0x1f4
    *(esi + 0x70) = 0
    *(esi + 0x74) = 0
    *(esi + 0x78) = 0
    int32_t eax_9 = sub_4d18c0(2) & 1
    *(esi + 0x3c) = eax_9
    result = *(esi + 0x44)
    
    if (eax_9 != 0)
        result = neg.d(result)
    
    *(esi + 0x38) = result
    i += 0xc
    esi += 0x90
while (i s< 0x63e790)

return result
