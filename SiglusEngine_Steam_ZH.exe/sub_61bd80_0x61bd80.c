// 函数: sub_61bd80
// 地址: 0x61bd80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax
int32_t ecx
eax, ecx = sub_619740(arg1)

if (eax.b != 0)
    void* edx_1 = data_bac4a0
    int32_t var_1c_1 = 0
    sub_647610(eax, *(edx_1 + 8), arg1 + 0x1bf0, *(edx_1 + 0xc), ecx)

int32_t* ecx_2 = data_bac450
int32_t edi = arg2
int32_t eax_1 = *ecx_2

if (eax_1 == 0xc8)
    arg2:3.b = 1
    
    if (ecx_2[3] != 0)
        arg2:3.b = 0
else if (eax_1 != 0x12d || edi s>= 0x8000)
    arg2:3.b = 0
else
    arg2:3.b = 1

int32_t* result = sub_611f60(1)

if (result.b != 0)
    int32_t ebx_1
    ebx_1.b = arg2:3.b == 0
    
    if (ebx_1 != 0xfffffffe)
        result = sub_6120a0(ebx_1 + 1)
    
    if (ebx_1 == 0xfffffffe || result.b != 0)
        void* eax_4
        eax_4.b = arg2:3.b != 0
        
        if (eax_4 != 0xfffffffe)
            result = sub_6120a0(eax_4 + 1)
        
        if ((eax_4 == 0xfffffffe || result.b != 0) && sub_612220(1).b != 0)
            int32_t ebx_2
            
            if (*(data_bac450 + 0x48) == 0)
                if (sub_612000(arg1, 1).b != 0)
                    result = sub_611bf0(arg1)
                    
                    if (result.b != 0)
                        if (ebx_1 != 0xfffffffe)
                            result = sub_612160(ebx_1 + 1)
                        
                        if (ebx_1 == 0xfffffffe || result.b != 0)
                            ebx_2.b = arg2:3.b
                            result.b = ebx_2.b != 0
                            
                            if (sub_61bf90(arg1, edi, result.b).b != 0 && sub_611bf0(arg1).b != 0)
                                if (eax_4 != 0xfffffffe)
                                    result = sub_612160(eax_4 + 1)
                                    
                                    if (result.b == 0)
                                        return result
                                
                                goto label_61beeb
            else if (sub_611bf0(arg1).b != 0)
                sub_6f60f0(sub_614c50(arg1 + 0x1aec))
                result = sub_612000(arg1, 1)
                
                if (result.b != 0)
                    if (ebx_1 != 0xfffffffe)
                        result = sub_612160(ebx_1 + 1)
                    
                    if (ebx_1 == 0xfffffffe || result.b != 0)
                        ebx_2.b = arg2:3.b
                        result.b = ebx_2.b != 0
                        
                        if (sub_61bf90(arg1, edi, result.b).b != 0 && sub_611bf0(arg1).b != 0)
                            sub_6f60f0(sub_614c50(arg1 + 0x1aec))
                            
                            if (sub_612000(arg1, 1).b != 0)
                                if (eax_4 == 0xfffffffe)
                                label_61beeb:
                                    result.b = ebx_2.b == 0
                                    
                                    if (sub_61bf90(arg1, edi, result.b).b != 0)
                                        return sub_6122c0(arg1, 1) != 0
                                else if (sub_612160(eax_4 + 1).b != 0)
                                    goto label_61beeb

result.b = 0
return result
