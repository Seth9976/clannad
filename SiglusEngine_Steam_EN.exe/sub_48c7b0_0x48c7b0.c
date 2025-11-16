// 函数: sub_48c7b0
// 地址: 0x48c7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_8c4ac0.d

if (ecx u> 9)
    return 0xffffffff

void* result = nullptr
void* esi_2 = &(&data_8c4ac0)[ecx * 3]:4

if (data_108f2e4 != 0)
    sub_414c50(ecx)
    data_108f2e4 = 0

int32_t ecx_1

if (data_108f2f4 != data_131d2cc || data_108f2f8 != data_1320e58)
    ecx_1 = 1
    data_108f2f0 = 1
else
    ecx_1 = data_108f2f0

if (data_703798 == 0 || data_131310c - data_108f2e8 u>= data_12dc62c)
    data_108f2fc = 1
    data_108f300 = 1
else if (data_108f2fc != 0 || ecx_1 != 0)
    data_108f300 = 1
else if (data_108f300 == 0)
    data_108f304 = 0
    return 0

void* eax_5 = sub_48c3f0(*(esi_2 + 4), *(esi_2 + 8))
void* eax_6 = sub_48c3f0(*(esi_2 + 0xc), *(esi_2 + 0x10))
void* eax_7 = sub_48c3f0(*(esi_2 + 0x1c), *(esi_2 + 0x20))

if ((eax_6 == 0 || *(eax_6 + 0x14) != 1) && (eax_7 == 0 || *(eax_7 + 0x14) != 1))
    *(esi_2 + 4) = 0xffffffff
    *(esi_2 + 8) = 0xffffffff

int32_t eax_9 = data_1320e5c

if (eax_9 == 0xffffffff || eax_9 == 5)
    int32_t eax_10 = data_71929c
    
    if (eax_10 == 5 || eax_10 == 4 || eax_10 == 1 || eax_10 == 2 || eax_10 == 3 || eax_10 == 0x15)
        bool cond:0_1 = sub_48c700() != 0
        int32_t eax_12 = data_1320e5c
        
        if (cond:0_1)
            eax_12 = 5
        
        data_1320e5c = eax_12

int32_t edx_3 = *(esi_2 + 8)
void* eax_13 = sub_48c3f0(*(esi_2 + 4), edx_3)
int32_t eax_14 = *(esi_2 + 4)
void* edx_5

if (data_108f2dc == 0)
    if (eax_14 == 0xffffffff)
        if (data_13702a1 != 0)
        label_48cbc0:
            *(esi_2 + 0xc) = 0xfffffffe
            *(esi_2 + 0x10) = 0xffffffff
        label_48cbd5:
            
            if (data_13702a0 == 0)
                *(esi_2 + 0xc) = 0xffffffff
                *(esi_2 + 0x10) = 0xffffffff
            else if (*(esi_2 + 0xc) s>= 0)
                result = 4
            
            if (data_137027c == 0)
                *(esi_2 + 0x1c) = 0xffffffff
                *(esi_2 + 0x20) = 0xffffffff
                data_108f304 = result
                return result
            
            if (*(esi_2 + 0x1c) s>= 0)
                result = 0x68
            
            data_108f304 = result
            return result
        
        if (data_13702a2 == 0)
            if (data_108f2d8 == 0 || data_137027e == 0)
                goto label_48cbd5
            
        label_48cb9f:
            int32_t ecx_14 = *esi_2
            *(esi_2 + 0x2c) = 1
            sub_4a1e40(ecx_14)
            data_108f304 = 2
            return 2
    else
        if (data_13702a1 != 0)
            *(esi_2 + 0x10) = edx_3
            *(esi_2 + 0xc) = eax_14
            
            if (sub_48c440(eax_13, eax_6) != 0)
                data_108f304 = 4
                return 4
            
        label_48cabc:
            result = 6
        label_48cac1:
            int32_t eax_26 = *(eax_13 + 4)
            
            if (eax_26 s< 0)
                data_108f304 = result
                return result
            
            sub_4a1e40(*(eax_26 * 0xc + &data_1310574))
            data_108f304 = result
            return result
        
        if (data_13702a2 == 0)
            if (data_108f2d8 != 0 && data_137027e != 0)
                goto label_48cb9f
            
        label_48cb54:
            void* eax_33 = sub_48c440(eax_13, eax_5)
            
            if (eax_33 == 0)
                result = eax_33 + 3
                int32_t eax_34 = *(eax_13 + 4)
                
                if (eax_34 s>= 0)
                    sub_4a1e40(*(eax_34 * 0xc + &data_1310570))
            
            goto label_48cbd5
        
        edx_5 = eax_6
        
        if (sub_48c440(eax_13, edx_5) != 0)
        label_48cb05:
            result = 1
            *(esi_2 + 0x14) = *(esi_2 + 0xc)
            *(esi_2 + 0x18) = *(esi_2 + 0x10)
        label_48cb13:
            sub_4847d0()
            int32_t eax_31 = *(edx_5 + 4)
            
            if (eax_31 s< 0)
                data_108f304 = result
                return result
            
            sub_4a1e40(*(eax_31 * 0xc + &data_1310578))
            data_108f304 = result
            return result
else if (eax_14 == 0xffffffff)
    if (data_13702a1 != 0 && *(esi_2 + 0x1c) == 0xffffffff)
        goto label_48cbc0
    
    if (data_13702a2 == 0 || *(esi_2 + 0x1c) != 0xffffffff)
        if (data_137027d != 0 && *(esi_2 + 0xc) == 0xffffffff)
            *(esi_2 + 0x1c) = 0xfffffffe
            *(esi_2 + 0x20) = 0xffffffff
            goto label_48cbd5
        
        if (data_137027e == 0 || *(esi_2 + 0xc) != 0xffffffff)
            goto label_48cbd5
        
    label_48ca78:
        *(esi_2 + 0x1c) = 0xffffffff
        *(esi_2 + 0x20) = 0xffffffff
        data_108f304 = 0x69
        return 0x69
else
    if (data_13702a1 != 0 && *(esi_2 + 0x1c) == 0xffffffff)
        *(esi_2 + 0x10) = edx_3
        *(esi_2 + 0xc) = eax_14
        
        if (sub_48c440(eax_13, eax_6) == 0)
            goto label_48cabc
        
        data_108f304 = 4
        return 4
    
    if (data_13702a2 == 0 || *(esi_2 + 0x1c) != 0xffffffff)
        if (data_137027d != 0 && *(esi_2 + 0xc) == 0xffffffff)
            *(esi_2 + 0x20) = edx_3
            *(esi_2 + 0x1c) = eax_14
            void* eax_19 = sub_48c440(eax_13, eax_7)
            
            if (eax_19 != 0)
                data_108f304 = 0x68
                return 0x68
            
            result = eax_19 + 0x6a
            goto label_48cac1
        
        if (data_137027e == 0 || *(esi_2 + 0xc) != 0xffffffff)
            goto label_48cb54
        
        edx_5 = eax_7
        
        if (sub_48c440(eax_13, edx_5) == 0)
            goto label_48ca78
        
        result = 0x65
        *(esi_2 + 0x24) = *(esi_2 + 0x1c)
        *(esi_2 + 0x28) = *(esi_2 + 0x20)
        goto label_48cb13
    
    edx_5 = eax_6
    
    if (sub_48c440(eax_13, edx_5) != 0)
        goto label_48cb05
*(esi_2 + 0xc) = 0xffffffff
*(esi_2 + 0x10) = 0xffffffff
data_108f304 = 5
return 5
