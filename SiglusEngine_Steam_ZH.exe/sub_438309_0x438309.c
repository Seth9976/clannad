// 函数: sub_438309
// 地址: 0x438309
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_c = edi

if (arg3 != 0)
    if (arg3[6] * arg3[5] != 1)
        sub_43713d(arg1, &arg3[0xc], 0xbcb, "float expected")
        return nullptr
    
    if (sub_43772a(arg1, arg3[4]) == 0)
        sub_43713d(arg1, &arg3[0xc], 0xbcb, "float expected")
        return nullptr

void*** eax_4 = sub_42cfa1(0x24)
void*** esi_1

if (eax_4 == 0)
    esi_1 = nullptr
else
    esi_1 = sub_46be22(eax_4)

if (esi_1 == 0)
    return nullptr

int32_t* ecx_1 = arg2
esi_1[4] = 3

if (arg4 != 0)
label_4383a4:
    
    if (ecx_1 == 0)
        goto label_4383b4
    
    int32_t eax_7 = (*(*ecx_1 + 4))()
    esi_1[5] = eax_7
    
    if (eax_7 != 0)
        goto label_4383b4
else
    if (ecx_1 != 0)
        if (ecx_1 == arg5)
            esi_1[4] = 5
            ecx_1 = nullptr
        
        goto label_4383a4
    
    esi_1[4] = 4
label_4383b4:
    
    if (arg3 == 0)
    label_4383c6:
        
        if (arg5 == 0)
        label_4383d8:
            
            if (arg4 == 0)
                goto label_4383fb
            
            void*** eax_12 = sub_438224(arg4)
            
            if (eax_12 != 0)
                esi_1[7] = sub_46b5c3(esi_1[7], eax_12)
            label_4383fb:
                void*** eax_14 = sub_42cfa1(0x14)
                void*** result
                
                if (eax_14 == 0)
                    result = nullptr
                else
                    result = sub_46b602(eax_14, esi_1, 0, "Stmts")
                
                if (result != 0)
                    return result
        else
            int32_t eax_11 = (*(*arg5 + 4))()
            esi_1[7] = eax_11
            
            if (eax_11 != 0)
                goto label_4383d8
    else
        int32_t eax_9 = (*(*arg3 + 4))()
        esi_1[6] = eax_9
        
        if (eax_9 != 0)
            goto label_4383c6

return nullptr
