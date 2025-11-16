// 函数: sub_6dba30
// 地址: 0x6dba30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_1c = nullptr
char* ebx = arg2
char var_5 = 0
uint32_t ecx = zx.d(*(arg3 + 0x157))
uint32_t eax = zx.d(*(arg3 + 0x14d))
int32_t* edx_1 = *(arg3 + 0x124) + 1
int32_t edi = *(arg3 + 0x100)
uint32_t var_14 = ecx

if (ecx == 0)
    sub_6d42e0(arg3, "internal row logic error")
    noreturn

if (*(arg3 + 0x130) != 0)
    uint32_t eax_3
    
    if (ecx u< 8)
        eax_3 = (edi * ecx + 7) u>> 3
    else
        eax_3 = (ecx u>> 3) * edi
    
    if (*(arg3 + 0x130) != eax_3)
        sub_6d42e0(arg3, "internal row size calculation error")
        noreturn

if (edi == 0)
    sub_6d42e0(arg3, "internal row width error")
    noreturn

int32_t eax_8 = edi * ecx
int32_t temp3 = eax_8 & 7
char var_10_1 = temp3.b

if (temp3 != 0)
    uint32_t ecx_2
    
    if (ecx u< 8)
        ecx_2 = (eax_8 + 7) u>> 3
    else
        ecx_2 = (ecx u>> 3) * edi
    
    char* eax_10 = &ebx[0xffffffff + ecx_2]
    var_1c = eax_10
    eax_10.b = *eax_10
    var_5 = eax_10.b
    char eax_11
    
    if ((*(arg3 + 0x7c) & 0x10000) == 0)
        eax_11 = (0xff s>> var_10_1).b
    else
        eax_11 = (0xff << var_10_1).b
    
    ecx = var_14
    var_10_1 = eax_11

int32_t eax_12

if (*(arg3 + 0x14c) != 0)
    eax_12 = *(arg3 + 0x7c)

uint32_t i_9

if (*(arg3 + 0x14c) == 0 || (eax_12.b & 2) == 0 || eax u>= 6
        || (arg4 != 0 && (arg4 != 1 || (eax.b & 1) == 0)))
    void* ecx_23
    
    if (ecx u< 8)
        ecx_23 = (eax_8 + 7) u>> 3
    else
        ecx_23 = (ecx u>> 3) * edi
    
    i_9 = sub_748840(ebx, edx_1, ecx_23)
label_6dbe8a:
    
    if (var_1c != 0)
        i_9.b = var_10_1
        i_9.b = not.b(i_9.b)
        i_9.b &= *var_1c
        i_9.b |= var_10_1 & var_5
        *var_1c = i_9.b
else
    i_9 = (eax & 1) << (3 - ((eax + 1) u>> 1).b) & 7
    
    if (edi u> i_9)
        if (var_14 u< 8)
            uint32_t i_15 = divu.dp.d(0:8, var_14)
            int32_t eax_21 = 0
            int32_t edx_4
            
            if ((eax_12 & 0x10000) == 0)
                if (arg4 == 0)
                    if (var_14 != 1)
                        eax_21.b = var_14 != 2
                        eax_21 += 1
                    
                    edx_4 = *(((eax + eax_21 * 6) << 2) + &data_adb788)
                else
                    if (var_14 != 1)
                        eax_21.b = var_14 != 2
                        eax_21 += 1
                    
                    edx_4 = *((((eax u>> 1) + eax_21 * 3) << 2) + &data_adb7f4)
            else if (arg4 == 0)
                if (var_14 != 1)
                    eax_21.b = var_14 != 2
                    eax_21 += 1
                
                edx_4 = *(((eax + eax_21 * 6) << 2) + &data_adb740)
            else
                if (var_14 != 1)
                    eax_21.b = var_14 != 2
                    eax_21 += 1
                
                edx_4 = *((((eax u>> 1) + eax_21 * 3) << 2) + &data_adb7d0)
            
            i_9 = i_15
            char* esi_2 = edx_1 - ebx
            
            while (true)
                char ecx_15 = edx_4.b
                edx_4 = ror.d(edx_4, 8)
                uint32_t ecx_16 = zx.d(ecx_15)
                
                if (ecx_16 != 0)
                    i_9.b = *(esi_2 + ebx)
                    
                    if (ecx_16 != 0xff)
                        i_9.b &= ecx_16.b
                        ecx_16.b = not.b(ecx_16.b)
                        ecx_16.b &= *ebx
                        i_9.b |= ecx_16.b
                    
                    *ebx = i_9.b
                    i_9 = i_15
                
                if (edi u<= i_9)
                    break
                
                edi -= i_9
                ebx = &ebx[1]
            
            goto label_6dbe8a
        
        if ((var_14.b & 7) != 0)
            sub_6d42e0(arg3, "invalid user transform pixel depth")
            noreturn
        
        uint32_t i_12 = var_14 u>> 3
        int32_t eax_28 = i_9 * i_12
        void* edx_5 = edx_1 + eax_28
        void* ebx_1 = &ebx[eax_28]
        void* i_6 = edi * i_12 - eax_28
        uint32_t i_8
        
        if (arg4 == 0)
            i_8 = i_12
        else
            uint32_t i_14 = (1 << ((6 - eax) u>> 1).b) * i_12
            i_8 = i_14
            
            if (i_14 u> i_6)
                i_8 = i_6
        
        int32_t eax_29 = 1 << ((7 - eax) u>> 1).b
        int32_t var_c_1 = eax_29
        uint32_t i_13 = eax_29 * i_12
        i_9 = i_8
        
        if (i_9 == 1)
            i_9.b = *edx_5
            *ebx_1 = i_9.b
            
            if (i_6 u> i_13)
                void* i_11 = i_6
                
                do
                    i_9.b = *(edx_5 + i_13)
                    edx_5 += i_13
                    ebx_1 += i_13
                    i_11 -= i_13
                    *ebx_1 = i_9.b
                while (i_11 u> i_13)
        else if (i_9 == 2)
            while (true)
                *ebx_1 = *edx_5
                i_9 = zx.d(*(edx_5 + 1))
                *(ebx_1 + 1) = i_9.b
                
                if (i_6 u<= i_13)
                    break
                
                i_6 -= i_13
                edx_5 += i_13
                ebx_1 += i_13
                
                if (i_6 u<= 1)
                    i_9.b = *edx_5
                    *ebx_1 = i_9.b
                    return i_9
        else if (i_9 == 3)
            *ebx_1 = *edx_5
            *(ebx_1 + 1) = *(edx_5 + 1)
            i_9 = zx.d(*(edx_5 + 2))
            *(ebx_1 + 2) = i_9.b
            
            if (i_6 u> i_13)
                char eax_37
                
                do
                    char eax_35 = *(edx_5 + i_13)
                    edx_5 += i_13
                    ebx_1 += i_13
                    i_6 -= i_13
                    *ebx_1 = eax_35
                    *(ebx_1 + 1) = *(edx_5 + 1)
                    eax_37 = *(edx_5 + 2)
                    *(ebx_1 + 2) = eax_37
                while (i_6 u> i_13)
                
                return eax_37
        else if (i_9 u>= 0x10 || (ebx_1.b & 1) != 0 || (edx_5.b & 1) != 0 || (i_9.b & 1) != 0
                || (i_13.b & 1) != 0)
            sub_748840(ebx_1, edx_5, i_9)
            i_9 = i_13
            
            if (i_6 u> i_9)
                void* esi_15 = edx_5
                
                do
                    esi_15 += i_9
                    ebx_1 += i_9
                    i_6 -= i_9
                    void* i_10 = i_8
                    
                    if (i_10 u> i_6)
                        i_10 = i_6
                    
                    i_8 = i_10
                    sub_748840(ebx_1, esi_15, i_10)
                    i_9 = i_13
                while (i_6 u> i_9)
        else if ((ebx_1.b & 3) != 0 || (edx_5.b & 3) != 0 || (i_9.b & 3) != 0 || (i_13.b & 3) != 0)
            uint32_t esi_14 = (i_13 - i_9) u>> 1
            
            while (true)
                uint32_t i_5 = i_9
                uint32_t i
                
                do
                    i_9.w = *edx_5
                    ebx_1 += 2
                    *(ebx_1 - 2) = i_9.w
                    edx_5 += 2
                    i = i_5
                    i_5 -= 2
                while (i != 2)
                
                if (i_6 u<= i_13)
                    break
                
                i_6 -= i_13
                ebx_1 += esi_14 << 1
                edx_5 += esi_14 << 1
                i_9 = i_8
                
                if (i_9 u> i_6)
                    char* edx_7 = edx_5 - ebx_1
                    void* i_1
                    
                    do
                        i_9.b = *(edx_7 + ebx_1)
                        ebx_1 += 1
                        *(ebx_1 - 1) = i_9.b
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
                    return i_9
        else
            uint32_t esi_11 = (i_13 - i_9) u>> 2
            
            while (true)
                uint32_t i_4 = i_9
                uint32_t i_2
                
                do
                    i_9 = *edx_5
                    edx_5 += 4
                    *ebx_1 = i_9
                    ebx_1 += 4
                    i_2 = i_4
                    i_4 -= 4
                while (i_2 != 4)
                
                if (i_6 u<= i_13)
                    break
                
                i_6 -= i_13
                uint32_t eax_31 = esi_11 << 2
                ebx_1 += eax_31
                edx_5 += eax_31
                i_9 = i_8
                
                if (i_9 u> i_6)
                    char* edx_6 = edx_5 - ebx_1
                    void* i_7 = i_6
                    void* i_3
                    
                    do
                        i_9.b = *(edx_6 + ebx_1)
                        ebx_1 += 1
                        *(ebx_1 - 1) = i_9.b
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                    return i_9

return i_9
