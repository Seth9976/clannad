// 函数: __wcscats
// 地址: 0x747ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0

if (arg3 s<= 0)
    return 

int32_t* edi_1 = &arg3

do
    edi_1 = &edi_1[1]
    
    if (_wcscat_s(arg1, arg2, *edi_1) != 0)
        int32_t var_24
        __builtin_memset(&var_24, 0, 0x14)
        __invoke_watson()
        noreturn
    
    esi += 1
while (esi s< arg3)
