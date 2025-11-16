// 函数: sub_6deab0
// 地址: 0x6deab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3
void* ebx = nullptr
void* var_8 = nullptr
int32_t var_10
uint32_t var_c
int32_t* eax

if (edi s> 0)
    while (true)
        int32_t eax_2 = (*(**(arg1 + 0x120) + 0x14))()
        uint32_t edi_2 = *(arg1 + 0x30) - eax_2
        int32_t* ecx_1 = *(arg1 + 0x120)
        int32_t* eax_3 = &var_c
        int32_t edx_2 = arg3 - ebx
        var_c = edi_2
        var_10 = edx_2
        
        if (edi_2 s>= edx_2)
            eax_3 = &var_10
        
        eax = (*(*ecx_1 + 0xc))(var_8 + arg2, *eax_3)
        ebx = var_8 + eax
        var_8 = ebx
        
        if (eax s> 0)
            void* ecx_2 = *(arg1 + 0x120)
            int32_t eax_7
            int32_t edx_3
            edx_3:eax_7 = sx.q(*(ecx_2 + 8))
            void* eax_10 = ((eax_7 + (edx_3 & 7)) s>> 3) * *(ecx_2 + 4)
            sub_748840(arg1 + 0x24, ebx - eax_10 + arg2, eax_10)
        
        edi = arg3
        
        if (ebx == edi)
            goto label_6deb6b
        
        if (*(arg1 + 0x28) == 0)
            break
        
        int32_t edx_5 = *(arg1 + 0x34)
        
        if (edx_5 s>= *(arg1 + 0x30))
            goto label_6deb6b
        
        (*(**(arg1 + 0x120) + 0x10))(edx_5)
        
        if (ebx s>= edi)
            goto label_6deb6b
    
    goto label_6deb75

label_6deb6b:

if (*(arg1 + 0x28) == 0)
label_6deb75:
    
    if (edi != ebx)
        void* ecx_7 = *(arg1 + 0x120)
        int32_t eax_14
        int32_t edx_6
        edx_6:eax_14 = sx.q(*(ecx_7 + 8))
        eax = ((eax_14 + (edx_6 & 7)) s>> 3) * *(ecx_7 + 4)
        
        if (eax == 1)
            uint32_t eax_17 = zx.d(*(arg1 + 0x24))
            sub_6b2ad0(eax_17, edi - ebx, ebx + arg2, eax_17.b)
            int32_t eax_18
            eax_18.b = 1
            return eax_18
        
        if (eax == 2)
            uint32_t ecx_10 = zx.d(*(arg1 + 0x24))
            int32_t* ebx_3 = ebx + arg2
            int32_t eax_20
            int32_t edx_9
            edx_9:eax_20 = sx.q(edi - ebx)
            var_c = ecx_10
            int32_t esi_2 = (eax_20 - edx_9) s>> 1
            int32_t eax_23
            int32_t edx_10
            edx_10:eax_23 = sx.q(esi_2)
            var_10 = (eax_23 - edx_10) s>> 1
            int32_t ecx_14
            int32_t edi_7
            edi_7, ecx_14 = __memfill_u32(ebx_3, zx.d(ecx_10.w) * 0x10001, var_10)
            eax = esi_2 & 0x80000001
            
            if (eax s< 0)
                eax = ((eax - 1) | 0xfffffffe) + 1
            
            if (eax == 1)
                *(ebx_3 + (esi_2 << 1) - 2) = var_c.w
                uint16_t eax_30
                eax_30.b = 1
                return eax_30
        else if (eax == 4)
            int32_t* eax_31 = *(arg1 + 0x24)
            int32_t eax_33
            int32_t edx_11
            edx_11:eax_33 = sx.q(edi - ebx)
            var_10 = (eax_33 + (edx_11 & 3)) s>> 2
            int32_t ecx_16
            int32_t edi_10
            edi_10, ecx_16 = __memfill_u32(arg2 + ebx, eax_31, var_10)

eax.b = 1
return eax
