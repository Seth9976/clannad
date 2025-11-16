// 函数: sub_461db2
// 地址: 0x461db2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
int32_t result = 0

if (*(ebx + 0x30) != 0)
    return 0

*(ebx + 0x30) = 1
bool cond:1_1 = *(arg1 + 0xc) u<= 0
int32_t edi
int32_t var_1c_1 = edi
arg2 = nullptr

if (cond:1_1)
label_461e10:
    int32_t* esi_2 = *(ebx + 0x1c)
    int32_t edi_3 = 0
    
    if (esi_2 == 0 || *esi_2 u<= 0)
    label_461e3f:
        int32_t* esi_3 = *(ebx + 0x20)
        int32_t edi_4 = 0
        
        if (esi_3 == 0 || *esi_3 u<= 0)
        label_461e84:
            
            if (sub_482843(arg1 + 0xc, ebx) == 0)
                result = 0x8007000e
        else
            while (true)
                int32_t result_2 = sub_4613e7(arg1, *(esi_3[3] + (edi_4 << 2)) + 4, &arg2)
                result = result_2
                
                if (result_2 s< 0)
                    break
                
                int32_t result_3 = sub_461db2(arg2)
                result = result_3
                
                if (result_3 s< 0)
                    break
                
                edi_4 += 1
                
                if (edi_4 u>= *esi_3)
                    goto label_461e84
    else
        while (true)
            int32_t eax_5 = *(*(esi_2[3] + (edi_3 << 2)) + 8)
            
            if (eax_5 != 0)
                int32_t result_1 = sub_461db2(eax_5)
                result = result_1
                
                if (result_1 s< 0)
                    break
            
            edi_3 += 1
            
            if (edi_3 u>= *esi_2)
                goto label_461e3f
else
    int32_t* eax_2 = *(arg1 + 0x18)
    
    while (true)
        int32_t* edi_2 = *eax_2 + 8
        int32_t i = 4
        void* esi_1 = ebx + 8
        bool cond:3_1 = true
        
        while (i != 0)
            int32_t temp1_1 = *esi_1
            int32_t temp2_1 = *edi_2
            cond:3_1 = temp1_1 == temp2_1
            esi_1 += 4
            edi_2 = &edi_2[1]
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (cond:3_1)
            result = 0
            break
        
        arg2 += 1
        eax_2 = &eax_2[1]
        
        if (arg2 u>= *(arg1 + 0xc))
            goto label_461e10

*(ebx + 0x30) = 0
return result
