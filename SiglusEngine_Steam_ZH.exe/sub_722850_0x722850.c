// 函数: sub_722850
// 地址: 0x722850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 1

if (arg3 != 0)
    int32_t ecx = *(arg3 + 0x20)
    *(arg3 + 0x18) = 0
    
    if (ecx != 0 && *(arg3 + 0x24) != 0)
        int32_t edi = arg5
        
        if (arg2 == 0xffffffff)
            arg2 = 6
        
        if (edi s< 0)
            var_8 = 0
            edi = neg.d(edi)
        else if (edi s> 0xf)
            var_8 = 2
            edi -= 0x10
        
        if (arg6 - 1 u> 8 || arg4 != 8 || edi - 8 u> 7 || arg2 u> 9 || arg7 u> 4)
            return 0xfffffffe
        
        if (edi == 8)
            edi = 9
        
        void** eax_4 = ecx(*(arg3 + 0x28), 1, 0x16c4)
        
        if (eax_4 != 0)
            *(arg3 + 0x1c) = eax_4
            *eax_4 = arg3
            int32_t esi_1 = 1 << edi.b
            eax_4[6] = var_8
            eax_4[0xc] = edi
            eax_4[0xb] = esi_1
            eax_4[0xd] = esi_1 - 1
            eax_4[7] = 0
            int32_t eax_7 = 1 << (arg6 + 7).b
            eax_4[0x13] = eax_7
            eax_4[0x15] = eax_7 - 1
            eax_4[0x14] = arg6 + 7
            eax_4[0x16] = (arg6 + 9) u/ 3
            int32_t eax_11 = (*(arg3 + 0x20))(*(arg3 + 0x28), esi_1, 2)
            int32_t var_30_1 = eax_4[0xb]
            eax_4[0xe] = eax_11
            int32_t eax_13 = (*(arg3 + 0x20))(*(arg3 + 0x28), var_30_1, 2)
            int32_t var_3c_1 = eax_4[0x13]
            eax_4[0x10] = eax_13
            eax_4[0x11] = (*(arg3 + 0x20))(*(arg3 + 0x28), var_3c_1, 2)
            eax_4[0x5b0] = 0
            int32_t eax_16 = 1 << (arg6.b + 6)
            eax_4[0x5a7] = eax_16
            int32_t eax_18 = (*(arg3 + 0x20))(*(arg3 + 0x28), eax_16, 4)
            int32_t edi_2 = eax_4[0x5a7]
            bool cond:1_1 = eax_4[0xe] == 0
            eax_4[2] = eax_18
            eax_4[3] = edi_2 << 2
            
            if (not(cond:1_1) && eax_4[0x10] != 0 && eax_4[0x11] != 0 && eax_18 != 0)
                eax_4[9].b = 8
                eax_4[0x5a9] = eax_18 + (edi_2 u>> 1 << 1)
                eax_4[0x5a6] = edi_2 * 3 + eax_18
                eax_4[0x21] = arg2
                eax_4[0x22] = arg7
                return sub_722ae0(arg3)
            
            eax_4[1] = 0x29a
            *(arg3 + 0x18) = "insufficient memory"
            sub_7233d0(arg3)
        
        return 0xfffffffc

return 0xfffffffe
