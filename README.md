# ⚔️ Desafio: Escrevendo as Classes de um Jogo em C

Projeto desenvolvido como parte do desafio prático de lógica de programação da DIO. O objetivo é simular a estrutura de classes e objetos em **Linguagem C** para representar heróis de uma aventura e definir suas ações de ataque com base no tipo do personagem.

---

## 📌 Requisitos do Desafio

- **Variáveis & Estruturas de Dados** (`struct` simulando classes)
- **Estruturas de Decisão** (`if / else if`)
- **Funções** (simulando métodos)
- **Operadores & Manipulação de Strings** (`strcmp`, `strcpy`)

---

## 🎮 Regras de Ataque

| Tipo de Herói | Descrição do Ataque |
| :--- | :--- |
| **mago** | usou magia |
| **guerreiro** | usou espada |
| **monge** | usou artes marciais |
| **ninja** | usou shuriken |

---

## 🛠️ Como Executar

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/OpedroPrataDEV/desafio-heroi-c.git
   cd desafio-heroi-c
   ```

2. **Compile o código:**
   ```bash
   gcc main.c -o heroi
   ```

3. **Execute o programa:**
   ```bash
   ./heroi
   ```
   No Windows, execute `heroi.exe`.

---

## ✅ Saída esperada

```text
o mago atacou usando magia
o guerreiro atacou usando espada
o monge atacou usando artes marciais
o ninja atacou usando shuriken
```