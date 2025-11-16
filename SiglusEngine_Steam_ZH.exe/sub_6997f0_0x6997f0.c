// 函数: sub_6997f0
// 地址: 0x6997f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0

if (arg1[2] s> 0)
    while (true)
        if (esi s>= 0 && esi s< arg1[2])
            j__free(*(*arg1 + (esi << 2)))
            
            if (esi s< arg1[2])
                j__free(*(arg1[1] + (esi << 2)))
                esi += 1
                
                if (esi s>= arg1[2])
                    break
                
                continue
        
        RaiseException(0xc000008c, 1, 0, nullptr)
        noreturn

int32_t eax_3 = *arg1

if (eax_3 != 0)
    _free(eax_3)
    *arg1 = 0

int32_t eax_4 = arg1[1]

if (eax_4 != 0)
    _free(eax_4)
    arg1[1] = 0

arg1[2] = 0
return 0
