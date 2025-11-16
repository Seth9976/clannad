// 函数: sub_46378b
// 地址: 0x46378b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
HRSRC eax = FindResourceA(arg1, arg2, arg3)

if (eax == 0)
    return 0x8876038a

HGLOBAL hResData = LoadResource(arg1, eax)

if (hResData == 0)
    return 0x8876038b

int32_t eax_2 = LockResource(hResData)
uint32_t eax_3 = SizeofResource(arg1, eax)
int32_t* esi_3

if (eax_2 == 0 || eax_3 == 0)
    esi_3 = 0x8876038b
else
    void*** eax_4 = sub_745f3f(0x54)
    void*** esi_2
    
    if (eax_4 == 0)
        esi_2 = nullptr
    else
        esi_2 = sub_46267a(eax_4, arg4, eax, eax_2, eax_3)
    
    if (esi_2 != 0)
        int32_t* edi_2 = sub_46275d(esi_2)
        
        if (edi_2 s>= 0)
            edi_2 = sub_4636e2(esi_2)
            
            if (edi_2 s>= 0)
                edi_2 = sub_46339e(esi_2)
                
                if (edi_2 s>= 0)
                    *arg5 = esi_2
                    return nullptr
        
        (*esi_2)[2](esi_2)
        return edi_2
    
    esi_3 = 0x8007000e

FreeResource(eax)
return esi_3
