// 函数: sub_4869ce
// 地址: 0x4869ce
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
uint32_t i_2 = sub_48645d(arg1)
int32_t eax_7
void* ecx_5
char* esi_1

if (i_2 s<= 0xf)
    if (i_2 s>= 0xa)
        return i_2
    
    if (i_2 + 1 u> 8)
        return 0xff
    
    double var_14
    float var_10
    float var_8
    int32_t eax_27
    
    switch (i_2)
        case 0
            return 0xff
        case 1, 2
            if ((*(**(arg1 + 0xc) + 0x10))(&var_8) == 0)
                return 0xff
            
            int32_t var_10_1 = 0
            esi_1 = &data_b98080
            char* ebx_1 = &data_b98080
            
            if (var_8 u> 0)
                do
                    uint32_t eax_3 = sub_48643c(arg1)
                    
                    if (eax_3 == 0xffffffff)
                        return 0xff
                    
                    if (var_10_1 u< 0x1ff)
                        *ebx_1 = eax_3.b
                        ebx_1 = &ebx_1[1]
                    
                    var_10_1 += 1
                while (var_10_1 u< var_8)
            
            char* eax_5 = &data_b98080
            *ebx_1 = 0
            char i
            
            do
                i = *eax_5
                eax_5 = &eax_5[1]
            while (i != 0)
            eax_7 = _malloc(eax_5 - &data_b98080)
            data_b9a5a8 = eax_7
            
            if (eax_7 == 0)
                return 0xff
            
            ecx_5 = eax_5 - &data_b98080
            goto label_486a86
        case 3
            eax_27 = (*(**(arg1 + 0xc) + 0x10))(&var_14:4)
        label_486b97:
            
            if (eax_27 == 0)
                return 0xff
            
            data_b9a5a8 = var_10
            return i_2
        case 4
            int32_t eax_29 = **(arg1 + 0xc)
            
            if (*(arg1 + 0x24) == 4)
                eax_27 = (*(eax_29 + 0x14))(&var_14:4)
                goto label_486b97
            
            if ((*(eax_29 + 0x18))(&var_14) == 0)
                return 0xff
            
            data_b9a5a8 = fconvert.s(fconvert.t(var_14))
            return i_2
        case 5
            (*(**(arg1 + 0xc) + 0x10))(&data_b9a5a8)
            data_b9a5ac = sub_48645d(arg1)
            data_b9a5ae = sub_48645d(arg1)
            int32_t eax_35
            
            for (int32_t i_1 = 0; i_1 s< 8; i_1 += 1)
                eax_35 = (*(**(arg1 + 0xc) + 4))(&(&data_b9a5b0)[i_1])
            
            if (eax_35 != 0)
                return i_2
            
            return 0xff
        case 6
            if ((*(**(arg1 + 0xc) + 0x10))(&var_8) == 0)
                return 0xff
            
            float eax_11 = var_8
            int32_t esi_3 = 0
            
            if (eax_11 == 0)
                return 0xff
            
            int32_t eax_13 = _malloc(eax_11 << 2)
            
            if (eax_13 == 0)
                return 0xff
            
            if (var_8 u> 0)
                do
                    if ((*(**(arg1 + 0xc) + 0x10))(&var_14:4) == 0)
                        return 0xff
                    
                    *(eax_13 + (esi_3 << 2)) = var_10
                    esi_3 += 1
                while (esi_3 u< var_8)
            
            data_b9a5ac.d = eax_13
        case 7
            if ((*(**(arg1 + 0xc) + 0x10))(&var_8) == 0)
                return 0xff
            
            float eax_19 = var_8
            int32_t ebx_3 = 0
            
            if (eax_19 == 0)
                return 0xff
            
            int32_t eax_21 = _malloc(eax_19 << 2)
            
            if (eax_21 == 0)
                return 0xff
            
            if (*(arg1 + 0x24) != 4)
                if (var_8 u> 0)
                    do
                        if ((*(**(arg1 + 0xc) + 0x18))(&var_14) == 0)
                            return 0xff
                        
                        *(eax_21 + (ebx_3 << 2)) = fconvert.s(fconvert.t(var_14))
                        ebx_3 += 1
                    while (ebx_3 u< var_8)
            else if (var_8 u> 0)
                do
                    if ((*(**(arg1 + 0xc) + 0x14))(&var_14:4) == 0)
                        return 0xff
                    
                    *(eax_21 + (ebx_3 << 2)) = fconvert.s(fconvert.t(var_10))
                    ebx_3 += 1
                while (ebx_3 u< var_8)
            
            data_b9a5ac.d = eax_21
        case 0xffffffff
            uint32_t var_c = 0
            data_b9a5e8 = 1
            return var_c
    
    data_b9a5a8 = var_8
    return i_2

if (i_2 s> 0x36)
    return 0xff

if (i_2 s< 0x31)
    if (i_2 s< 0x12)
        return 0xff
    
    if (i_2 s<= 0x14)
        return i_2
    
    if (i_2 != 0x1f && (i_2 s<= 0x27 || i_2 s> 0x2f))
        return 0xff

int32_t eax_37 = 0

while (i_2 != *((eax_37 << 3) + &data_b5627c))
    eax_37 += 1
    
    if (eax_37 u>= 0x10)
        return i_2

char* eax_38 = (&data_b56278)[eax_37 * 2]
void* ecx_23 = &eax_38[1]
char i_3

do
    i_3 = *eax_38
    eax_38 = &eax_38[1]
while (i_3 != 0)
eax_7 = _malloc(eax_38 - ecx_23 + 1)
data_b9a5a8 = eax_7

if (eax_7 == 0)
    return 0xff

ecx_5 = eax_38 - ecx_23 + 1
esi_1 = (&data_b56278)[eax_37 * 2]
label_486a86:
int32_t esi_2
int32_t edi_4
edi_4, esi_2 = __builtin_memcpy(eax_7, esi_1, ecx_5 u>> 2 << 2)
__builtin_memcpy(edi_4, esi_2, ecx_5 & 3)
return i_2
