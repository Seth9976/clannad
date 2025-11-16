// 函数: sub_40f985
// 地址: 0x40f985
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t var_8 = arg1.w
int16_t* esi = arg1
int16_t eax = esi[2]
int16_t edx = esi[4]
arg1.w = eax
esi[3] = edx
uint32_t result
result.w = *(*(*(esi + 0xc) + 0x250) + ((zx.d(arg1.w) * 3 + zx.d(edx)) << 1))
bool cond:0 = result.w == *esi
int32_t edi
int32_t var_10 = edi
esi[2] = result.w

if (not(cond:0))
    do
        if (esi[2] != 0xffff)
            int16_t eax_20 = sub_40c163(*(*(esi + 0xc) + 0x250) + zx.d(esi[2]) * 6, arg1.w)
            esi[4] = eax_20
            int32_t eax_22 = zx.d(eax_20) + 1
            
            if (esi[8].b == 0)
                eax_22 += 1
            
            esi[4] = (mods.dp.d(sx.q(eax_22), 3)).w
            goto label_40fa55
        
        if (esi[8].b == 0)
            goto label_40fa55
        
        if (*(esi + 0x11) != 0)
            goto label_40fa55
        
        result.w = *esi
        uint32_t edx_4 = zx.d(esi[1])
        void* ecx = *(esi + 0xc)
        esi[2] = result.w
        esi[8].b = 0
        int32_t eax_10
        int32_t edx_6
        edx_6:eax_10 = sx.q(zx.d(sub_40bf46(*(ecx + 0x24c) + zx.d(result.w) * 6, edx_4)) + 2)
        int32_t eax_13 = zx.d(esi[3]) + 2
        esi[4] = (mods.dp.d(edx_6:eax_10, 3)).w
        esi[3] = (mods.dp.d(sx.q(eax_13), 3)).w
        arg1.w = esi[2]
        result.w = *(*(*(esi + 0xc) + 0x250) + ((zx.d(arg1.w) * 3 + zx.d(esi[4])) << 1))
        esi[2] = result.w
    while (result.w != *esi)

esi[2] = 0xffff
label_40fa55:
result.w = eax
return result
