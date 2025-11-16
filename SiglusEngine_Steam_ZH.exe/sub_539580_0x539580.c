// 函数: sub_539580
// 地址: 0x539580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_3

if (arg3 != *(arg1 + 0xb0))
    if (arg3 == *(arg1 + 0x140))
        LRESULT hWnd = *(arg1 + 0x140)
        
        if (hWnd != 0)
            hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
        
        hWnd.b &= 1
        *(data_bac4e4 + 0x119) = hWnd.b
        sub_539cc0(arg1)
        void* eax_4
        eax_4.b = 1
        return eax_4
    
    if (arg3 == *(arg1 + 0x260))
        eax_3 = sub_6c3160(arg1 + 0x25c)
        
        if (*(data_bac4e4 + 0x134) != eax_3.b)
            *(data_bac4e4 + 0x134) = sub_6c3160(arg1 + 0x25c)
            void* ecx_5
            ecx_5.b = 0
            sub_675f90(ecx_5.b)
            int32_t* eax_6
            eax_6.b = 1
            return eax_6
    else if (arg3 == *(arg1 + 0x2f0))
        eax_3 = data_bac4e4
        
        if (eax_3[0x4e] != 0)
            arg1.b = 0
            eax_3[0x4e] = 0
            sub_675f90(arg1.b)
            int32_t* eax_7
            eax_7.b = 1
            return eax_7
    else if (arg3 == *(arg1 + 0x380))
        eax_3 = data_bac4e4
        
        if (eax_3[0x4e] != 1)
            arg1.b = 0
            eax_3[0x4e] = 1
            sub_675f90(arg1.b)
            int32_t* eax_8
            eax_8.b = 1
            return eax_8
    else if (arg3 != *(arg1 + 0x410))
        if (arg3 != *(arg1 + 0x4a0))
            if (arg3 == *(arg1 + 0x5c0))
                sub_539a00(arg1)
                LRESULT eax_11
                eax_11.b = 1
                return eax_11
            
            if (arg3 != *(arg1 + 0x650))
                int32_t eax
                eax.b = 0
                return eax
            
            sub_6bfea0(*(arg1 + 4))
            LRESULT eax_12
            eax_12.b = 1
            return eax_12
        
        eax_3 = data_bac4e4
        
        if (eax_3[0x4e] != 3)
            arg1.b = 0
            eax_3[0x4e] = 3
            sub_675f90(arg1.b)
            int32_t* eax_10
            eax_10.b = 1
            return eax_10
    else
        eax_3 = data_bac4e4
        
        if (eax_3[0x4e] != 2)
            arg1.b = 0
            eax_3[0x4e] = 2
            sub_675f90(arg1.b)
            int32_t* eax_9
            eax_9.b = 1
            return eax_9
else if (arg2 u>> 0x10 == 1)
    sub_539f50(arg1)
    sub_675f90(0)

eax_3.b = 1
return eax_3
