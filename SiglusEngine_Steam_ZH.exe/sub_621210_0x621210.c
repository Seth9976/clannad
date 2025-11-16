// 函数: sub_621210
// 地址: 0x621210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t result = 0
int32_t* eax_1 = data_bac4dc + 0xc
int32_t edi
int32_t var_70 = edi

if (((eax_1[1] - *eax_1) & 0xfffffff0) s> 0)
    int32_t esi_1 = 0
    int32_t var_18_1 = 0
    int32_t i
    
    do
        int128_t xmm0_1 = *(*eax_1 + esi_1)
        void* esi_2 = data_bac4a0
        int32_t ecx_2 = *(esi_2 + 0x20)
        int32_t edi_2 = *(esi_2 + 8)
        int32_t ecx_3 = *(esi_2 + 0xc)
        int32_t edi_3 = *(esi_2 + 0x24)
        int32_t esi_3 = *(esi_2 + 0x14)
        POINT point_1
        point_1.y = esi_3 + divs.dp.d(sx.q(edi_3 * xmm0_1:4.d), ecx_3)
        int32_t eax_17 = divs.dp.d(sx.q(ecx_2 * xmm0_1:8.d), edi_2) + *(esi_2 + 0x10)
        void* edi_5 = data_bac454
        point_1.x = divs.dp.d(sx.q(xmm0_1 * ecx_2), edi_2) + *(esi_2 + 0x10)
        ClientToScreen(*(edi_5 + 4), &point_1)
        POINT point
        point.x = eax_17
        point.y = divs.dp.d(sx.q(edi_3 * xmm0_1:0xc.d), ecx_3) + esi_3
        ClientToScreen(*(edi_5 + 4), &point)
        int32_t* ecx_5 = data_bac42c
        int32_t eax_23 = *ecx_5
        
        if (point_1.x s<= eax_23 && eax_23 s< point.x)
            int32_t eax_24 = ecx_5[1]
            
            if (point_1.y s<= eax_24 && eax_24 s< point.y)
                return result
        
        eax_1 = data_bac4dc + 0xc
        i = result + 1
        esi_1 = var_18_1 + 0x10
        result = i
        var_18_1 = esi_1
    while (i s< (eax_1[1] - *eax_1) s>> 4)

return 0xffffffff
