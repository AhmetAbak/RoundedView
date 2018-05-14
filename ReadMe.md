This class is for creating ui objects with rounded corners.

e.g:
This code below will create a node with size 200x100px and corners rounded by 6 px and a background color of gray with alpha channel.
```
RoundedView *rv = RoundedView::create(6.0f, Size(200, 100), Color4F(0.4, 0.4, 0.4, 0.4));
addChild(rv);
```

To create a full circle with radius ```r```:
```
RoundedView *circle = RoundedView::create(r, Size(2*r, 2*r), Color4F(0.4, 0.4, 0.4, 0.4));
addChild(circle);
```
