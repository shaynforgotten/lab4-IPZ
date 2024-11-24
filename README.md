```mermaid
graph TD
    A([Start]) --> B[/"Set: $$x_start = 0, x_end = 3, \step = 0.4$$"/]
    B --> C[/"Output table header: x, u(x)"/]
    C --> D[Set $$x = x_start$$]
    D --> E{Is $$x \leq x_end$$?}
    E -- No --> F([End])
    E -- Yes --> G{Is $$x \leq 2.2$$?}
    G -- Yes --> H["Compute: $$u(x) = x - 0.8 \cdot \sin(x)$$"]
    G -- No --> I["Compute: $$u(x) = \arctan(\ln(x) + 0.3)$$"]
    H --> J[/"Output: $$x, u(x)$$"/]
    I --> J
    J --> K[Increment $$x = x + \step$$]
    K --> E

```
