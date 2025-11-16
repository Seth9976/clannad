// 函数: sub_57ff50
// 地址: 0x57ff50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
void* i = &data_8fcb1c
void* ecx = &data_f8d300
int32_t result_1 = result
int32_t edi = 0
void* var_c = &data_f8d300
void* esi = &data_f8d35c

do
    if (result != 0 || *(ecx - 0x24) == result)
        int32_t* eax = *ecx
        
        if (eax != 2)
            if (eax == 1)
                sub_57fdd0(eax, 0, edi, 0)
                ecx = var_c
        else if (edi u<= 0x3f)
            bool cond:0_1 = *(esi - 0xbd8) != 0
            data_13701d8 = 0
            data_137010c = 1
            
            if (cond:0_1)
                sub_460dd0(esi)
            else
                sub_460d60(esi)
            
            if (*(esi - 0x3850) s>= 0 && *(esi - 0x384c) s>= 0)
                if (*(esi - 0x54) != 0)
                    sub_576270(esi - 0x3860)
                
                bool cond:1_1 = *(esi - 0xbd8) != 0
                *(esi - 0x54) = 0
                *(esi - 0x44) = 0
                *(esi - 0x40) = 0
                *(esi - 0x3c) = 0
                *(esi - 0x34) = 0
                *(esi - 0x30) = 0
                *(esi - 0x2c) = 0
                *(esi - 0x50) = 0
                
                if (not(cond:1_1))
                    sub_57e8b0(edi)
                
                *(esi - 0xbd8) = 0
                *(esi - 0xbc8) = 0
                sub_57f370(edi, 0)
                
                if (*(esi - 0x58) == 0)
                    sub_57f7d0(edi)
                
                *(esi - 0x58) = 0
                *(i - 4) = 0
                *i = 0
                *(esi - 0x5c) = 0
                *(esi - 0x4c) = 0
                *(esi - 0x48) = 0
                *(esi - 0x38) = 2
            
            ecx = var_c
        
        result = result_1
    
    ecx += 0x3920
    i += 0x2d0
    edi += 1
    var_c = ecx
    esi += 0x3920
while (i s< 0x907f1c)

return result
