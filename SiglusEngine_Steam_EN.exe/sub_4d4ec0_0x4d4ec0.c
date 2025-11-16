// 函数: sub_4d4ec0
// 地址: 0x4d4ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t ebx = data_1c051c4
int32_t edi = data_1c051c8

switch (jump_table_4d50b4[arg1])
    case 0x4d4eda
        return 2
    case 0x4d4ee6
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(data_1332b60)
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = sx.q(data_1332b60)
        
        if ((((edx_1 & 3) + eax_3) s>> 2) + ((eax_5 - edx_3) s>> 1) s<= edi)
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = sx.q(data_1332b64)
            int32_t eax_11
            int32_t edx_6
            edx_6:eax_11 = sx.q(data_1332b64)
            
            if ((((edx_4 & 3) + eax_9) s>> 2) + ((eax_11 - edx_6) s>> 1) s<= ebx)
                return 3
        
        return 2
    case 0x4d4f30
        int32_t eax_15 = data_1332b60
        int32_t esi_7 = data_1332b64
        
        if (eax_15 s<= edi && esi_7 s<= ebx)
            return 1
        
        int32_t eax_16
        int32_t edx_7
        edx_7:eax_16 = sx.q(eax_15)
        int32_t eax_18
        int32_t edx_9
        edx_9:eax_18 = sx.q(data_1332b60)
        
        if ((((edx_7 & 3) + eax_16) s>> 2) + ((eax_18 - edx_9) s>> 1) s<= edi)
            int32_t eax_22
            int32_t edx_10
            edx_10:eax_22 = sx.q(esi_7)
            int32_t eax_24
            int32_t edx_12
            edx_12:eax_24 = sx.q(esi_7)
            
            if ((((edx_10 & 3) + eax_22) s>> 2) + ((eax_24 - edx_12) s>> 1) s<= ebx)
                return 3
        
        return 2
    case 0x4d4f8e
        int32_t esi_8 = data_1332b64
        int32_t eax_29
        int32_t edx_13
        edx_13:eax_29 = sx.q(data_1332b60)
        int32_t eax_31 = data_1332b60
        int32_t ecx_7 = (eax_29 - edx_13) s>> 1
        
        if (ecx_7 + eax_31 s<= edi)
            int32_t eax_33
            int32_t edx_14
            edx_14:eax_33 = sx.q(esi_8)
            
            if (((eax_33 - edx_14) s>> 1) + esi_8 s<= ebx)
                return 4
            
            eax_31 = data_1332b60
        
        if (eax_31 s<= edi && esi_8 s<= ebx)
            return 1
        
        int32_t eax_38
        int32_t edx_15
        edx_15:eax_38 = sx.q(eax_31)
        
        if (((eax_38 + (edx_15 & 3)) s>> 2) + ecx_7 s<= edi)
            int32_t eax_43
            int32_t edx_17
            edx_17:eax_43 = sx.q(esi_8)
            int32_t eax_45
            int32_t edx_19
            edx_19:eax_45 = sx.q(esi_8)
            
            if ((((edx_17 & 3) + eax_43) s>> 2) + ((eax_45 - edx_19) s>> 1) s<= ebx)
                return 3
        
        return 2
    case 0x4d5015
        int32_t ecx_12 = data_1332b60
        int32_t esi_9 = data_1332b64
        
        if (ecx_12 * 2 s<= edi && esi_9 * 2 s<= ebx)
            return 5
        
        int32_t eax_53
        int32_t edx_20
        edx_20:eax_53 = sx.q(ecx_12)
        int32_t eax_55 = (eax_53 - edx_20) s>> 1
        int32_t eax_57
        int32_t edx_21
        
        if (ecx_12 + eax_55 s<= edi)
            edx_21:eax_57 = sx.q(esi_9)
        
        if (ecx_12 + eax_55 s<= edi && ((eax_57 - edx_21) s>> 1) + esi_9 s<= ebx)
            return 4
        
        int32_t eax_61 = data_1332b60
        
        if (eax_61 s<= edi && esi_9 s<= ebx)
            return 1
        
        int32_t eax_62
        int32_t edx_22
        edx_22:eax_62 = sx.q(eax_61)
        
        if (((eax_62 + (edx_22 & 3)) s>> 2) + eax_55 s<= edi)
            int32_t eax_67
            int32_t edx_24
            edx_24:eax_67 = sx.q(esi_9)
            int32_t eax_69
            int32_t edx_26
            edx_26:eax_69 = sx.q(esi_9)
            
            if ((((edx_24 & 3) + eax_67) s>> 2) + ((eax_69 - edx_26) s>> 1) s<= ebx)
                return 3
        
        return 2
