// 函数: sub_466d91
// 地址: 0x466d91
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
char eax = esi[0x47].b
int32_t edi
int32_t var_10 = edi

if (eax u< 8)
    uint32_t ebx_1 = zx.d(eax)
    sub_468e37(esi, ebx_1 + arg2 + 0x20, 8 - ebx_1)
    esi[0x47].b = 8
    
    if (sub_4669bd(&arg2[8], ebx_1, 8 - ebx_1) != 0)
        int32_t eax_8
        
        if (ebx_1 u< 4)
            eax_8 = sub_4669bd(&arg2[8], ebx_1, 8 - ebx_1 - 4)
        
        char const* const var_14_4
        
        if (ebx_1 u>= 4 || eax_8 == 0)
            var_14_4 = "PNG file corrupted by ASCII conversion"
        else
            var_14_4 = "Not a PNG file"
        
        sub_46691d(esi, var_14_4)
        noreturn

uint32_t eax_9

while (true)
    sub_468e37(esi, &arg1, 4)
    eax_9 = sub_499762(&arg1)
    sub_466a6c(esi)
    sub_4997a6(esi, &esi[0x43], 4)
    
    if (esi[0x43] == 0x52444849)
        sub_49a113(esi, arg2, eax_9)
    else if (esi[0x43] == 0x45544c50)
        sub_49a30b(esi, arg2, eax_9)
    else if (esi[0x43] != 0x444e4549)
        int32_t ecx_4 = esi[0x43]
        
        if (ecx_4 == 0x54414449)
            break
        
        if (ecx_4 == 0x414d4167)
            sub_49a46e(esi, arg2, eax_9)
        else if (esi[0x43] == 0x42475273)
            sub_49a571(esi, arg2, eax_9)
        else if (esi[0x43] != 0x534e5274)
            sub_49a7fa(esi, arg2)
        else
            sub_49a655(esi, arg2, eax_9)
    else
        uint32_t var_14_9 = eax_9
        sub_49a426(esi, arg2)

char result = (esi[0x16]).b
char const* const var_14_11

if ((result & 1) != 0)
    if (*(esi + 0x116) != 3 || (result & 2) != 0)
        esi[0x16] |= 4
        esi[0x3f] = eax_9
        return result
    
    var_14_11 = "Missing PLTE before IDAT"
else
    var_14_11 = "Missing IHDR before IDAT"

sub_46691d(esi, var_14_11)
noreturn
