// 函数: sub_5a78f0
// 地址: 0x5a78f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ebx_1 = zx.d(arg2.w)
uint32_t esi_2 = zx.d((arg2 s>> 0x10).w)
int32_t result = sub_5a7850(arg1, ebx_1, esi_2)

if (result.b != 0)
    SetFocus(arg1[0x19])
    result = arg1[0xb]
    
    if (result != arg1[0xc] && arg1[0x16] s>= 0)
        int32_t eax
        int32_t edx_1
        edx_1:eax = muls.dp.d(0x38e38e39, arg1[0xc] - result)
        int32_t edx_2 = edx_1 s>> 4
        result = (edx_2 u>> 0x1f) + edx_2
        
        if (arg1[0x16] s< result)
            POINT point
            point.x = ebx_1
            point.y = esi_2
            ClientToScreen(*arg1, &point)
            ScreenToClient(arg1[0x19], &point)
            struct HWND__* ecx_2 = arg1[0xb]
            void* esi_3 = arg1[0x16] * 9
            arg1[0xa]
            ecx_2[esi_3 * 2 + 0xc].unused =
                divs.dp.d(sx.q(point.y), arg1[0xa]) + 1 + ecx_2[esi_3 * 2 + 0xf].unused
            return sub_5a8110(arg1)

return result
